#include "stdafx.h"
#include <iostream>

using namespace std;

void copy(int *A, int *B, int n)
{
	for (int i = 0; i < n; i++)
	{
		B[i] = A[i];
	}
}
int main()
{
	int A[5] = {1, 2, 3, 4, 5};
	int B[4] = {};
	int n = 4;
	copy(A, B, n);

	for (int i = 0; i < 4; i++)
	{
		cout << B[i] << "\n";
	}

    return 0;
}

