//학생들의 시험 점수를 통계처리하는 프로그램
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
	cout << "학생의 수를 입력하세요.: ";
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

	cout << "[시험 1] 최대 점수: " << max1 << "  최소 점수: " << min1 << "  평균 점수: " << sum1 / c << endl;
	cout << "[시험 2] 최대 점수: " << max2 << "  최소 점수: " << min2 << "  평균 점수: " << sum2 / c << endl;
	cout << "[시험 3] 최대 점수: " << max3 << "  최소 점수: " << min3 << "  평균 점수: " << sum3 / c << endl;

	
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
		cout << "["<< i + 1 <<"번 학생] 최대 점수: " << cmax << "  최소 점수: " << cmin << "  평균 점수: " << csum / 3 << endl;
		csum = 0;
		cmax = 0;
		cmin = 100;
	}
	return 0;
}

