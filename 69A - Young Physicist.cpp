#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
const int N = 100 + 5;
int a[N][3], n;
int main()
{
	cin >> n;
	int s0 = 0, s1 = 0, s2 = 0;;
	for (int i = 0; i < n; i++)
		scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);

	for (int i = 0; i < n; i++) {
		s0 += a[i][0];
		s1 += a[i][1];
		s2 += a[i][2];
	}
	if (s0 == 0 && s1 == 0 && s2 == 0)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}