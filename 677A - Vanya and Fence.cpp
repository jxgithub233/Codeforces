#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	int n, h,i,cnt=0;
	cin >> n >> h;
	while (n--)
	{
		cin >> i;
		if (i > h)
			cnt += 2;
		else
			cnt++;
	}
	cout << cnt;

	return 0;
}
