#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	char s[101];
	cin >> s;
	int flag = 0;
	for (int i = 0; s[i+6] !=0; i++) {
		if (s[i] == s[i + 1]&& s[i + 1] == s[i + 2] && s[i + 2] == s[i + 3] && s[i + 3] == s[i + 4]&& s[i + 4] == s[i + 5]&& s[i + 5] == s[i + 6])
		{
			cout << "YES"; return 0;
		}


	}
	cout << "NO";

	return 0;
}