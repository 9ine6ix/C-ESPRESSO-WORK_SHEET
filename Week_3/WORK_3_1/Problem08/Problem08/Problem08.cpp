#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int a = 0;
	int n = 0;
	int t = 0;
	int s = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			n++;
		else if (str[i] == ' ')
			t++;
		else if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
			a++;
		else
			s++;
	}
	cout << "���ĺ� ������ ������ " << a << "��" << endl;
	cout << "������ ������ " << n << "��" << endl;
	cout << "���� ������ ������ " << t << "��" << endl;
    return 0;
}

