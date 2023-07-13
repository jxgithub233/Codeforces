#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>

using namespace std;
char s[51];
int main()
{
	int n,cnt=0;
	cin >>n>> s;
	for(int i=0;i<n-1;i++)
		if (s[i] == s[i + 1]) {
			cnt++;
		}
	cout << cnt;
	return 0;
}