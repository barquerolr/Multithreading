/****************************************************************************
EGRE 531: Multithreaded Programming
Lab 1
Programmed by: Luis Barquero
Purpose: Program will calculate the value of an RPN expression. 
***************************************************************************/

#include <iostream>
#include <stack>
#include "Lab1.h"
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <algorithm>
using namespace std;
bool str2double(string&, double&);

int main()
{
	Calculator rpn; 
	string ptr; //variable that represents the user's input.
	double convert; //variable that will be used in the conversion of the string to the double.
	char c; // variable used to set the while loop.
	cout << "RPN calculator using prefix notation, or enter q or Q to exit" << endl;
	while(c == 0) //while loop condition.
	{
		cin >> ptr; // extracts the user's input.
		if(str2double(ptr,convert)) //string to double function.
		{
			rpn.enter(convert); //if the input is a double, it enters the double into the stack and prints them.
		}
		
		if(ptr == "+") //if the user's string involves a + operator
		{
			rpn.add(); //adds the two numbers and places them onto the stack.
			rpn.prt(); // calls the print function.
			cout << "Enter C to clear the queue, or continue adding numbers to the RPN queue, or enter q or Q to exit." << endl;
		}
		else if (ptr == "-")//if the user's string involves a - operator
		{
			rpn.sub();//subtracts the two numbers and places them onto the stack.
			rpn.prt();//calls the print function.
			cout << "Enter C to clear the queue, or continue adding numbers to the RPN queue, or enter q or Q to exit." << endl;
		}
		else if(ptr == "*") //if the user's string involves a * operator
		{
			rpn.mult();//multiplies the two numbers and places them onto the stack.
			rpn.prt();//calls the print function.
			cout << "Enter C to clear the queue, or continue adding numbers to the RPN queue, or enter q or Q to exit." << endl;
		}
		else if(ptr == "/")//if the user's string involves a +/ operator
		{
			rpn.div();//divides the two numbers and places them onto the stack.
			rpn.prt();//calls the print function.
			cout << "Enter C to clear the queue, or continue adding numbers to the RPN queue, or enter q or Q to exit." << endl;
		}
		
		else if ((ptr == "c") || (ptr == "C")) //if the user's string involves an upper or lowercase c/
		{
			rpn.clear(); // calls the clear function (which clears the stack.)
			rpn.prt();//calls the print function.
			cout << "RPN calculator using prefix notation, or enter q or Q to exit" << endl;
		}
		else if ((ptr == "q") || (ptr == "Q"))
		{
			exit(1);
		}
	}
}

bool str2double(string& term, double& operand)
{
  char* ptr;
  // conversion begins at term string address 0 and on success
  // pointer ptr is advanced to end of numeric portion of content
  operand = strtod(term.c_str(), &ptr);
  // return boolean value of comparisonn 
  // addr stored in ptr to addr of term string
  return (ptr == (term.c_str()+term.length()));
}
