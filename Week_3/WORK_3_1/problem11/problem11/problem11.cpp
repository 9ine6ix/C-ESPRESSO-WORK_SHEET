#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int vowel = 0; // 모음
	int consonant = 0; // 자음

	for (int i = 0; i < str.length(); i++)
	{
			if (str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u')
				vowel++;
			else if (str[i] >= 'a' && str[i] <= 'z')
				consonant++;
		
	}

	cout << "vowel: " << vowel << "\n";
	cout << "consonant: " << consonant << "\n";
    return 0;
}

