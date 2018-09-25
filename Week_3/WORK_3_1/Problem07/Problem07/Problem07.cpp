#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char is = 'Y';
	double r = 0;
	while (is == 'Y' || is == 'y')
	{
		cin >> r;
		cout << r*r << "파이" << endl;
		cout << "계속하시겠습니까?(Y/N): ";
		cin >> is;
	}

    return 0;
}

