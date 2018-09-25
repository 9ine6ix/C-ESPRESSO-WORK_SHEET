#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	if (str[str.length() - 1] != '.')
		str.append(".");
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	cout << str;
    return 0;
}
