#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s1[101];
	char s2[101];
	cin >> s1 >> s2;
	for (int i = 0, j = strlen(s2) - 1; i < strlen(s1), j >= 0; i++, j--) {
		if (s1[i] != s2[j])
		{
			cout << "NO"; return 0;
		}
	}
	cout << "YES";
	return 0;
}