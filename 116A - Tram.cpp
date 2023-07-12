#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	int n,c=0,max=0;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		c = c - a;
		c = c + b;
		if (c > max)max = c;

	}
	cout << max;
	return 0;
}