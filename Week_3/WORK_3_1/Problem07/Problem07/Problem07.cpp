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
		cout << r*r << "����" << endl;
		cout << "����Ͻðڽ��ϱ�?(Y/N): ";
		cin >> is;
	}

    return 0;
}

