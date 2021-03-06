#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#include <iostream>

using namespace std;


void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}


int choose_pivot(int i, int j)
{
	return((i + j) / 2);
}

void quicksort(int list[], int m, int n)
{
	int key, i, j, k;
	if (m < n)
	{
		k = choose_pivot(m, n);
		swap(&list[m], &list[k]);
		key = list[m];
		i = m + 1;
		j = n;

		while (i <= j)
		{
			while ((i <= n) && (list[i] <= key))
				i++;
			while ((j >= m) && (list[j] > key))
				j--;
			if (i < j)
				swap(&list[i], &list[j]);
		}
		// swap two elements

		swap(&list[m], &list[j]);
		// recursively sort the lesser list

			quicksort(list, m, j - 1);
			quicksort(list, j + 1, n);
	}
}

#define SIZE	200000

int main()
{
	int random_nums[SIZE];
	int x, y;
	x = 0;
	y = SIZE - 1;

	srand(time(NULL));
	int tn = 2; //the number of threads
	omp_set_num_threads(tn); //you can also set the number of threads here besides the environment variable
	cout << "Process is starting..." << endl;
	clock_t start = clock();

	for (int i = 0; i < SIZE; i = i + 1)
	{
		random_nums[i] = 1 + rand() % SIZE;
	}
	/*
	cout << "\nArray before quicksort: " << endl;
	for (int j = 0; j < 100000; j = j + 1)
	{
	cout << random_nums[j] << " ";
	//quicksort(random_nums, x, y);
	}
	*/
#pragma omp critical
	quicksort(random_nums, x, y);

	/*
	cout << "\n\nArray after quicksort: " << endl;
	for (int j = 0; j < SIZE; j = j + 1)
	{
	cout << random_nums[j] << " ";
	}
	*/


	clock_t stop = clock();
	cout << "\n" << endl;
	cout << "Elapsed time: " << (double)(stop - start) * 1000 / CLOCKS_PER_SEC << endl;
	cout << "\n" << endl;
}