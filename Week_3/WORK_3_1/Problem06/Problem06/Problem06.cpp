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
			cout << "������ ������ �߸��Ǿ����ϴ�." << endl;
		if (i >= 2 && (str[i] < '0' || str[i] > '9'))
			cout << "���� ��ȣ�� �߸��Ǿ����ϴ�." << endl;
	}
    return 0;
}

