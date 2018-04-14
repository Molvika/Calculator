#include "Calculator.h"

using namespace std;

Calculator::Calculator()
{}

Calculator::~Calculator()
{}

//Addition Function
void Calculator::on_addition(double num1, double num2)
{
	std::cout << num1 + num2 << "\n";
}

//Subtraction Function
void Calculator::on_subtraction(double num1, double num2)
{
	std::cout << num1 - num2 << "\n";
}

//Multiplication Function
void Calculator::on_multiplication(double num1, double num2)
{
	std::cout << num1 * num2 << "\n";
}

//Division Function
void Calculator::on_division(double num1, double num2)
{
	std::cout << num1/num2 << "\n";
}

//Starting with the Calculator...
int main()
{
	//-------defining variables and initializing-------------  
	double num1, num2;
	char operation, redo;
	Calculator cal;


	cout << "Calculator Program:" << endl;
	cout << "***************************************************************" << endl;
	cout << endl << endl << endl;

	/*--Here do while loop is used so that the program can be used more than one time
	without exiting the run screen---------------------------   */
	do
	{
		//----receiving the variables from user--------------         
		cout << " Please Enter an operation which you like to do: (+,-,*,/)";
		cin >> operation;
		cout << endl << endl;
			cout << " Please enter two numbers to apply your requested operation(";
			cout << operation << "):" << endl << "1st num:";
			cin >> num1;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout << "Not a valid number. Please re-enter: num1 ";
				cin >> num1;
			}

			cout << "2nd num:";
			cin >> num2;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout << "Not a valid number. Please re-enter: num2 ";
				cin >> num2;
			}
			cout << endl;

			//---used switch function so that the operater can be decided------------  
			switch (operation)
			{
				//------calculating the requested equation for inputs------------- 
				//-------at the same time printing the results on screen-----------          
			case'+':
				cout << "The Addition of two numbers (" << num1 << "," << num2 << "):";
				cal.on_addition(num1, num2);
				break;
			case'-':
				cout << "The Substraction of two numbers (" << num1 << "," << num2 << "):";
				cal.on_subtraction(num1, num2);
				break;
			case'*':
				cout << "The Multiplication of two numbers (" << num1 << "," << num2 << "):";
				cal.on_multiplication(num1, num2);
				break;
			case'/':
				if (num2 == 0)
				{
					cout << "Not a valid Division: A number cannot be divided by Zero. Please enter another number: \nnum2" << endl;
					cin >> num2;
				}
				cout << "The division of two numbers: (" << num1 << "," << num2 << "):";
				cal.on_division(num1, num2);
				break;
			default:
				cout << "Invalid input...\nValid inputs are + , -, *, / " << endl;

			}
		
			//----Program will check if the user wants to continue or exit()       
			cout << "enter y or Y to continue and N or n to exit the application.....:";
			cin >> redo;
			if (redo == 'N' || redo == 'n')
				break;
			cout << endl << endl;
		
	} while (redo == 'y' || redo == 'Y');

	getchar();
	system("pause");

	return 0;
}