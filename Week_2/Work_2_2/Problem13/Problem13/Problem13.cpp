#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	string findstr;
	string changestr;
	cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin, str);
	cout << "ã�� ���ڿ�: ";
	cin >> findstr;
	cout << "�ٲ� ���ڿ�: ";
	cin >> changestr;

	str.replace(str.find(findstr), findstr.length(), changestr) ;

	cout << "���: " << str << "\n";

    return 0;
}

