#include<iostream>
using namespace std;

int main()
{
	cout<< "\t\t\t\t\t *********************** " <<endl;
	cout<< "\t\t\t\t\t    Simple Calculator    " <<endl;
	cout<< "\t\t\t\t\t *********************** " <<endl;
	char oper;
	float numb1,numb2;
	
	cout<< " Enter Operator(+,-,*,/) :";
	cin>>oper;
	
	cout<< " Enter Two Numbers :";
	cin>>numb1>>numb2;
	
	switch(oper)
	{
		case '+':
			cout<<" Sum :" <<numb1 + numb2;
			break;
			
		case '-':
			cout<<" Difference :" <<numb1 - numb2;
			break;
			
		case '/':
			cout<<" Division :" <<numb1 / numb2;
			break;
			
		case '*':
			cout<<" Multiplication :" <<numb1 * numb2;
			break;
		
		default:
			cout<<"Entered Operator is Invalid! ";
	}
	return 0;
	
}
