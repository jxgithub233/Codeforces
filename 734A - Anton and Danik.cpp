#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
char s[100000 + 10];
int main() {
	int n,a=0,d=0;
	cin >> n;
	scanf("%s", s);
	for (int i = 0; i<n; i++) {
		if (s[i] == 'A')a++;
		else d++;
	}

	if (a > d)cout << "Anton";
	else if (a < d)cout << "Danik";
	else cout << "Friendship";
	return 0;
}