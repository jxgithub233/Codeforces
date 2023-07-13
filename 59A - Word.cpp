#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	int A = 0, a = 0;
	char s[101];
	cin >> s;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			A++;
		else
			a++;
	}
	if (A > a) {
		for (int i = 0; s[i] != 0; i++) {
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] + 'A' - 'a';

		}
		cout << s;
	}
	else {
		for (int i = 0; s[i] != 0; i++)
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 'a' - 'A';
		cout << s;
	}
		
	return 0;
}