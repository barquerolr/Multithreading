// Lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int num;
	int subtraction;
	num = 21 + rand() % 79;
	cout << "Original number: " << num << endl;
	int jerry, tom;
	while (num >= 5)
	{

		for (int i = 0; i < num; i++)
		{
			jerry = 1 + rand() % 3;
			cout << "Jerry number: " << jerry << endl;
			num = num - jerry;
			cout << "Stones left: " << num << endl;

			tom = 1 + rand() % 3;
			cout << "Tom number: " << tom << endl;
			num = num - tom;
			cout << "Stones left: " << num << endl;
		}
			
	}

	if (num == 4)
	{
		tom = 1;
		jerry = 1;
		if (tom)
		{
			//jerry = 1;
			cout << "Jerry Number: " << jerry << endl;
			num = num - jerry;
			cout << "Stones left: " << num << endl;
		}

		if (jerry)
		{
			//tom = 1;
			cout << "Tom Number: " << tom << endl;
			num = num - tom;
			cout << "Stones left: " << num << endl;
		}
	}


	if (num == 3)
	{
		tom = 1;
		jerry = 1;
		if (tom)
		{
			//jerry = 1;
			cout << "Jerry Number: " << jerry << endl;
			num = num - jerry;
			cout << "Stones left: " << num << endl;
		}

		if (jerry)
		{
			//tom = 1;
			cout << "Tom Number: " << tom << endl;
			num = num - tom;
			cout << "Stones left: " << num << endl;
		}
	}


	if (num == 2)
	{
		tom = 1;
		jerry = 1;
		if (tom)
		{
			//jerry = 1;
			cout << "Jerry Number: " << jerry << endl;
			num = num - jerry;
			cout << "Stones left: " << num << endl;
		}

		if (jerry)
		{
			//tom = 1;
			cout << "Tom Number: " << tom << endl;
			num = num - tom;
			cout << "Stones left: " << num << endl;
		}
	}


	if (num == 1)
	{
		tom = 1;
		jerry = 1;
		if (tom)
		{
			//jerry = 1;
			cout << "Jerry Number: " << jerry << endl;
			num = num - jerry;
			cout << "Stones left: " << num << endl;
			if (num == 0)
			{
				cout << "Tom won" << endl;
			}
		}

		if (jerry)
		{
			//tom = 1;
			cout << "Tom Number: " << tom << endl;
			num = num - tom;
			cout << "Stones left: " << num << endl;
			if (num == 0)
			{
				cout << "Jerry won" << endl;
			}
		}
	}

	/*if (num == 0)
	{
		if (jerry)
		{
			cout << "Tom won" << endl;
		}

		else if (tom)
		{
			cout << "Jerry won" << endl;
		}
	}*/
    return 0;
}

