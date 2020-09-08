// Lab_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	double r;
	double e;
	double f;
	char rpn[32];
	cout << "Enter the RPN expression to be calculated" << endl;
	cin.getline(rpn, sizeof(rpn));
	//cin >> rpn;
	cout << "Input: " << rpn << endl;
	if (rpn[4] == '+' || rpn[5] == '+') 
	{
		a = rpn[0] - 48;
		b = rpn[2] - 48;
		c = a + b;
		//cout << "\n\n" << a << endl;
		cout << "Answer: " << rpn[0] << " + " << rpn[2] << " = " << c << endl;
	}

	else if (rpn[4] == '-')
	{
		a = rpn[0] - 48;
		b = rpn[2] - 48;
		c = a - b;
		//cout << "\n\n" << a << endl;
		cout << "Answer: " << rpn[0] << " - " << rpn[2] << " = " << c << endl;
	}

	else if (rpn[4] == '*')
	{
		a = rpn[0] - 48;
		b = rpn[2] - 48;
		c = a * b;
		//cout << "\n\n" << a << endl;
		cout << "Answer: " << rpn[0] << " * " << rpn[2] << " = " << c << endl;
	}

	else if (rpn[4] == '/')
	{
		a = rpn[0] - 48;
		b = rpn[2] - 48;
		r = static_cast<double>(a);
		e = static_cast<double>(b);
		f = r / e;
		cout << f << endl;
		cout << "Answer: " << a << " / " << b << " = " << f << endl;
	}
    return 0;
}

