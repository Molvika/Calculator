#include <iostream>
#include <stdio.h>

/*Class Calculator to ahold the Functions and Data together..*/

class Calculator
{
public:
	Calculator();
	~Calculator();
	
	//Operational Functions..
	void on_addition(double num1, double num2);
	void on_subtraction(double num1, double num2);
	void on_multiplication(double num1, double num2);
	void on_division(double num1, double num2);
};