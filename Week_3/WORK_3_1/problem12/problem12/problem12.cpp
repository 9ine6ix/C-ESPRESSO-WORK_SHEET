#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string id, password;
	cin >> id >> password;

	if (id == "kimnasik" && password == "1234")
		cout << "O" << endl;
	else
		cout << "X" << endl;

    return 0;
}

