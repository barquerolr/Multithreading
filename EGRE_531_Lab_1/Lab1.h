/****************************************************************************
EGRE 531: Multithreaded Programming
Lab 1
Programmed by: Luis Barquero
Purpose: Program will calculate the value of an RPN expression. 
***************************************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include <stack>

#ifndef Lab1_H
#define Lab1_H

using namespace std;
class Calculator
{
	private: //Private members.
	double answer; 
	stack<double> answer_stack; // Stack the will be used to compute the calculator
	
	public: //Public members
	Calculator(); //Default constructor.
	void add(double, double); //function that will add two numbers.
	void sub(double, double); //function that subtracts two number.
	void mult(double, double); //function that will add two numbers.
	void div(double, double); //function that divides two numbers.
	void add(double); //function that will add a number to a previous number.
	void sub(double); //function that will subtract a number from a previous answer.
	void mult(double); //function that will multiply a number from a previous answer.
	void div(double); //function that will divide a number froma previous entry.
	void enter(double); //function that will enter a new number into the registry.
	void add(); //Function that will add the two top members in the stack.
	void sub(); //Function that will subtract the two top members in the stack.
	void mult(); //Function that will multiply the two top members in the stack.
	void div(); // Function that will divide the two top members in the stack.
	void prt(); //print function.
	void clear(); //clear function.
};
#endif