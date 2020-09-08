// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

/*****************************************************************
Programmed by: Luis Barquero
Purpose: Program will perform matrix multiplication on 1000*1000 matrix.
		 and will determine the best i-j-k loop combination.
		 The program will then improve the elapsed time by performing cache blocking of size 10.
		 Finally, the elapsed time will be improved even further through parallelization.

*****************************************************************/

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<time.h>
#include<cstdlib>
#include<ctime>
#include<math.h>
#include<omp.h>

using namespace std;
#define SIZE 1000

//#define l1	i
//#define l2	j
//#define l3	k

int a[SIZE][SIZE];
int b[SIZE][SIZE];
int c[SIZE][SIZE];

int main()
{
	int bsize;
	bsize = 20;
	srand(time(NULL));
	int tn = 6; //the number of threads
	omp_set_num_threads(tn); //you can also set the number of threads here besides the environment vairalbe

	for (int i = 0; i < SIZE; i = i + 1)
	{
		for (int j = 0; j < SIZE; j = j + 1)
		{
			a[i][j] = 1 + rand() % 999;
			b[i][j] = 1 + rand() % 999;
			c[i][j] = 0;a
		}
	}

	//Implementation for i-j-k

	cout << "Starting..." << endl;
	clock_t start = clock();

	for (int ii = 0; ii < SIZE; ii = ii + bsize)
	{
		//sum = 0;
		for (int jj = 0; jj < SIZE; jj = jj + bsize)
		{
			for (int kk = 0; kk < SIZE; kk = kk + bsize)
			{
				int i = 0;
				int j = 0;
				int k = 0;

				#pragma omp parallel shared(a, b,c) private (i,j,k)
				{
					#pragma omp for schedule(static)
					
						for (i = ii; i < (ii + bsize); i = i + 1)
						{
							for (j = jj; j < (jj + bsize); j = j + 1)
							{
								for (k = kk; k < (kk + bsize); k = k + 1)
								{
									c[i][j] += a[i][k] * b[k][j];
								}
							}
						}
					
				}
			}
		}
	}


	clock_t stop = clock();
	double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;
	cout << "Elapsed time: " << elapsed << endl;
	cout << "\n" << endl;
}
