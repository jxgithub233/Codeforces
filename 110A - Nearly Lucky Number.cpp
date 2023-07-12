#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main() {
	char s[20];
	int cnt = 0;

	cin >> s;
	for (int i = 0; s[i] != 0; i++) {
		if (s[i] == '4' || s[i] == '7')
			cnt++;
	}
	if (cnt == 4 || cnt == 7)	cout << "YES";
	else cout << "NO";

	return 0;
}