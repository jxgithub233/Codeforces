#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	int dis;
	cin >> dis;
	if (dis % 5 == 0)
		cout << dis / 5;
	else
		cout << dis / 5 + 1;
	return  0;
}