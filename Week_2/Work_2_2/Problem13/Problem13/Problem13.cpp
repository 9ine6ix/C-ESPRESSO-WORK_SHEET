#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	string findstr;
	string changestr;
	cout << "문자열을 입력하시오: ";
	getline(cin, str);
	cout << "찾을 문자열: ";
	cin >> findstr;
	cout << "바꿀 문자열: ";
	cin >> changestr;

	str.replace(str.find(findstr), findstr.length(), changestr) ;

	cout << "결과: " << str << "\n";

    return 0;
}

