#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#include<iostream>
using namespace std;

void smallwork()
{

}

void bigwork()
{
	unsigned long sum = 0;

	for (int i = 0; i<100000000; i++)
		sum += i;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int tn = 8; //the number of threads
	omp_set_num_threads(tn); //you can also set the number of threads here besides the environment vairalbe
	cout << "Process is starting" << endl;
	clock_t start = clock();

#pragma omp sections
	{
#pragma omp section
		{

			for (int i = 0; i < 49; i++)
			{
				if (i < 50)
				{
					smallwork();
				}
				else
				{
					bigwork();
				}
			}
		}

#pragma omp section
		{
			for (int i = 50; i < 100; i++)
			{
				if (i % 2)
				{
					smallwork();
				}
				else
				{
					bigwork();
				}
			}
		}
	}

		cout << "Elapsed time: " << ((double)clock() - start) / CLOCKS_PER_SEC << endl;
		cout << "\n" << endl;

	return 0;
}
