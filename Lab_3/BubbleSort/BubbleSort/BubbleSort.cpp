//#include <unistd.h>
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#include <stdio.h>

void bubblesort(long array[]);
#define numberOfElements 500
#define numberOfLoop 10000

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	long array[numberOfElements];
	srand(time(NULL));
	int tn = 4; //the number of threads
	omp_set_num_threads(tn); //you can also set the number of threads here besides the environment vairalbe
	for (int i = 0; i < 10; i++)
	{
		cout << "Running OpenMP on " << tn << " thread(s)" << endl;
		cout << "Process is starting" << endl;
		clock_t start = clock();
		bubblesort(array);
		cout << "Elapsed time: " << ((double)clock() - start) / CLOCKS_PER_SEC << endl;
		cout << "\n" << endl;
	}
	return 0;
}
void bubblesort(long array[])
{
//#pragma omp parallel for schedule(static)
	for (int m = 0; m <= numberOfLoop; m++)
	{
		int t, NUM_ELEMENTS;
		if (m < numberOfLoop / 2)
		{
			NUM_ELEMENTS = numberOfElements / 2;
		}
			
		else
		{
			NUM_ELEMENTS = numberOfElements;
		}

			#pragma omp parallel for schedule(static)

		for (int n = 0; n < numberOfElements; n++)
			array[n] = rand() % numberOfElements;

			//#pragma omp parallel for schedule(dynamic)

		for (int i = 0; i < (numberOfElements - 1); i++)
		{
			//#pragma omp parallel for schedule(dynamic,50)
			#pragma omp critical
			for (int j = 0; j < (numberOfElements - 1); j++)
			{
				if (array[j] > array[j + 1])
				{
					t = array[j];
					array[j] = array[j + 1];
					array[j + 1] = t;
				}
			}
		}
	}
}
