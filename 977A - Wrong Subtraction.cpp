#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	while (b--) {
		if (a % 10!=0)
			a--;
		else
			a /= 10;
		
	}

	cout << a;
	return 0;
}