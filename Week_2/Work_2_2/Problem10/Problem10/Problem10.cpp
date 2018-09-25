#include "stdafx.h"
#include <iostream>

using namespace std;

int *search(int *A, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i] == x)
			return &A[i];
	}
	cout << "Not Search" << endl;
	return 0;
}
int main()
{
	int A[5] = { 1,2,3,4,5 };
	int n = 5;
	int x = 6;
	int *test = search(A, n, x);
	cout << search(A, n, x) << endl;
	cout << *test << endl;
    return 0;
}

