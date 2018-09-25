#include "stdafx.h"
#include <iostream>

using namespace std;

void get_stat(double A[], double *p_avg, double *p_max, double *p_sum);

int main()
{
	double sum = 0;
	double max = 0;
	double avg = 0;
	double A[6] = { 1, 2, 3, 4, 5, 6 };
	double *p_avg = &avg;
	double *p_max = &max;
	double *p_sum = &sum;

	get_stat(A, p_avg, p_max, p_sum);

	cout << "avg: "<< *p_avg << endl;
	cout << "max: "<< *p_max << endl;
	cout << "sum: "<< *p_sum << endl;

	return 0;
}

void get_stat(double A[], double *p_avg, double *p_max, double *p_sum)
{
	for (int i = 0; i < 6; i++)
	{
		*p_sum += A[i];
		if (*p_max < A[i])
			*p_max = A[i];
	}
	*p_avg = *p_sum / 6;
}

