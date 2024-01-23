#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{   
    cout<< "\t\t\t\t****************************************" <<endl;
	cout<< "\t\t\t\t| Welcome to the Number Guessing game  |" <<endl;
	cout<< "\t\t\t\t****************************************" <<endl;
	
	srand((unsigned int) time(NULL));
	
	int random = (rand() % 100)+1;
	int guess = 0;
	
	do
	{
		
		cout<<"\n Enter Guess(1-100): ";
		cin>>guess;
		  
		if(guess < random)
		    cout<< "You entered a lower number(Try higher number) " <<endl;
		    
		else if(guess > random)
		    cout<< "You entered a higher number(Try lower number)" <<endl;
			
		else
		    cout<< "\n Congrats! right guess.";		    
	
	}while(guess!=random);
}
