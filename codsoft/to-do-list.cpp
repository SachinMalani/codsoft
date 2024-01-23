#include <iostream>
#include <vector>
#include<windows.h>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        Task newTask(description);
        tasks.push_back(newTask);
        cout << "Task added: " << description << endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
        } else {
            cout << "Tasks in the list:\n";
            for (int i = 0; i < tasks.size(); ++i) {
                cout << "- " << tasks[i].description << " (" << (tasks[i].completed ? "Completed" : "Pending") << ")\n";
            }
        }
    }

    void markAsCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            cout << "Task marked as completed: " << tasks[index].description << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void removeTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
            cout << "Task removed." << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() {
	
	
    ToDoList todoList;

    while (true) {
        cout << "\n===== To-Do List Manager =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "\nChoose an option: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string taskDescription;
                cout << "\nEnter task description: ";
                cin.ignore(); // Clear input buffer
                getline(cin, taskDescription);
                todoList.addTask(taskDescription);
                break;
            }
            case 2:
                todoList.viewTasks();
                break;
            case 3: {
                int taskIndex;
                cout << "\nEnter task index to mark as completed: ";
                cin >> taskIndex;
                todoList.markAsCompleted(taskIndex);
                break;
            }
            case 4: {
                int taskIndex;
                cout << "\nEnter task index to remove: ";
                cin >> taskIndex;
                todoList.removeTask(taskIndex);
                break;
            }
            case 5:
                cout << "\nExiting the program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please choose a valid option.\n";
        }
    }

    return 0;
}
