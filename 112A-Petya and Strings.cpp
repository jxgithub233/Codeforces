#include <iostream>
using namespace std;
#include <string.h>
int main()
{
	char s[2][101];
	gets(s[0]);
	gets(s[1]);
	for(int j=0;j<2;j++)
	for(int i=0;i<strlen(s[j]);i++){
		if(s[j][i]>=65&&s[j][i]<=90){
			s[j][i]=s[j][i]+32;
		}
	}
/*
	puts(s[0]);
	puts(s[1]);
*/
	if(strcmp(s[0],s[1])>0)
		cout<<1;
	else if(strcmp(s[0],s[1])<0)
		cout<<-1;
	else
		cout<<0;
	return 0;
}
