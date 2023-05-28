#include <string.h>
#include <iostream>
using namespace std;
#define N 500
int main()
{
	int n;
	cin>>n;
	char s[N][101];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		if (strlen(s[i]) > 10) {
			printf("%c%d%c\n", s[i][0], strlen(s[i])-2,s[i][strlen(s[i])-1]);
		}
		else
			puts(s[i]);
	}
		return 0;
}