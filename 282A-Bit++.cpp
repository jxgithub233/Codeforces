#include <iostream>
using namespace std;
#include <string.h>

#define N 200
int main()
{
	char s[N][4];
	int n,x=0;

	scanf("%d ", &n);

	for (int i = 0; i < n; i++)
		gets(s[i]);
	for(int i=0;i<n;i++){

		if(s[i][0]=='X'){

			if(s[i][1]=='+')
				x++;
			if(s[i][1]=='-')
				x--;
		}
		if(s[i][0]=='+')
			++x;
		if(s[i][0]=='-')
			--x;
	}
	cout<<x;

	return 0;
}