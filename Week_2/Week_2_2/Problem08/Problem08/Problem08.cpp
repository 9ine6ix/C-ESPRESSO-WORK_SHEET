//�л����� ���� ������ ���ó���ϴ� ���α׷�
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int cs[10][3];
	int sum1 = 0, sum2 = 0, sum3 = 0;
	int max1 = 0, max2 = 0, max3 = 0;
	int min1 = 100, min2 = 100, min3 = 100;

	int c = 0;
	cout << "�л��� ���� �Է��ϼ���.: ";
	cin >> c;

	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> cs[i][j];
			if (j == 0)
			{
				if (max1 < cs[i][j])
					max1 = cs[i][j];
				if (min1 > cs[i][j])
					min1 = cs[i][j];
				sum1 += cs[i][j];
			}
			else if (j == 1)
			{
				if (max2 < cs[i][j])
					max2 = cs[i][j];
				if (min2 > cs[i][j])
					min2 = cs[i][j];
				sum2 += cs[i][j];
			}
			else if (j == 2)
			{
				if (max3 < cs[i][j])
					max3 = cs[i][j];
				if (min3 > cs[i][j])
					min3 = cs[i][j];
				sum3 += cs[i][j];
			}
		}
	}

	cout << "[���� 1] �ִ� ����: " << max1 << "  �ּ� ����: " << min1 << "  ��� ����: " << sum1 / c << endl;
	cout << "[���� 2] �ִ� ����: " << max2 << "  �ּ� ����: " << min2 << "  ��� ����: " << sum2 / c << endl;
	cout << "[���� 3] �ִ� ����: " << max3 << "  �ּ� ����: " << min3 << "  ��� ����: " << sum3 / c << endl;

	
	int csum = 0;
	int cmax = 0;
	int cmin = 100;

	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			csum += cs[i][j];
			if (cmax < cs[i][j])
				cmax = cs[i][j];
			if (cmin > cs[i][j])
				cmin = cs[i][j];
		}
		cout << "["<< i + 1 <<"�� �л�] �ִ� ����: " << cmax << "  �ּ� ����: " << cmin << "  ��� ����: " << csum / 3 << endl;
		csum = 0;
		cmax = 0;
		cmin = 100;
	}
	return 0;
}

