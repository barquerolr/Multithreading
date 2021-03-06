#include "stdafx.h"
#include <omp.h>
#include <time.h>

#define SIZE 5000
int a[SIZE][SIZE];
int b[SIZE][SIZE];

int _tmain(int argc, _TCHAR* argv[])
{
	clock_t t1, t2;

	int tn = 8; //the number of threads
	omp_set_num_threads(tn); //you can also set the number of threads here besides the environment vairalbe
	printf(" Running OpenMP benchmark on %d thread(s)\n", tn);
	printf("Start Parallel... \n");
	t1 = clock();

	//initializing data
#pragma omp parallel for shared(a,b) schedule(static,500)
	for (int m = 0; m<SIZE; m++)
	{
		for (int n = 0; n<SIZE; n++)
		{
			a[m][n] = 0;
			b[m][n] = m + n;
		}
	}

	//processing data
#pragma omp parallel for shared(a,b) schedule(static,500)
	for (int i = 1; i <= (SIZE - 2); i++)
	{
		for (int j = 1; j <= (SIZE - 2); j++)
		{
			a[j][i] = b[i][j];
		}
	}

	t2 = clock();

	printf("Done Parallel... \n");
	printf("Multi Threads,Time = %ld\n", t2 - t1);
	return 0;
}