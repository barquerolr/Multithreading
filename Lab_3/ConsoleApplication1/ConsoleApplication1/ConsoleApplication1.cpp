#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int _tmain(int argc, _TCHAR* argv[])
{
	long long max = 1000000;
	long long i, count = 0;
	double x, y, bulk, starttime, endtime;
	time_t t;
	int tn = 7; //the number of threads
	omp_set_num_threads(tn); //you can also set the number of threads here besides the environment vairalbe
	starttime = clock();
	srand((unsigned)time(&t));
	#pragma omp parallel for private(x,y) reduction(+:count)
	for (i = 0; i<max; i++)
	{
		x = rand();
		x = x / 32767;
		y = rand();
		y = y / 32767;
		if ((x*x + y*y) <= 1)
			count++;
	}
	bulk = 4 * (double(count) / max);
	endtime = clock();
	printf("pi is %f\n", bulk);
	printf("Running time is %f \n", endtime - starttime);
	return 0;
}