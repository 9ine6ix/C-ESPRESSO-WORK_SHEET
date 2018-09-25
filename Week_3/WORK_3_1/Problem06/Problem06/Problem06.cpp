#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	for (int i = 0; i < 6; i++)
	{
		if (i < 2 && str[i] < 'A')
			cout << "물건의 종류가 잘못되었습니다." << endl;
		if (i >= 2 && (str[i] < '0' || str[i] > '9'))
			cout << "모델의 번호가 잘못되었습니다." << endl;
	}
    return 0;
}

