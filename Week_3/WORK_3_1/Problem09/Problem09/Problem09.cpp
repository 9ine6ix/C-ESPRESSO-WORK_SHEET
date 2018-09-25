#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int count = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' && str[i] >= 'a' && str[i] <= 'z')
			count++;
	}
	cout << count + 1 << endl;

    return 0;
}

