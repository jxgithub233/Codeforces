#include <iostream>
#include <cstring>
using namespace std;
int main()
{

	char s[101];
	gets(s);
	
	int len=strlen(s);
	//偶数排序

	int i,j;
	for(i=0;i<len;i=i+2)
		for(j=0;j<len-2;j=j+2)
		{
			if(s[j]>s[j+2]){
				char t=s[j];
				s[j]=s[j+2];
				s[j+2]=t;
			}
		}
	cout<<s;
	return 0;
}