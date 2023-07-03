#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

#include <cstring>
#include <algorithm>
using namespace std;

const int N = 50 + 5;
char s[N];
int n,t;

int main()
{
	scanf("%d%d", &n,&t);
	scanf("%s", s);

	//printf("%d %d", n, t);
	//printf("\n");

	//for (int i = 0; i < strlen(s); i++)
	//	printf("%c", s[i]);
	//
	for (int i = 0; i<t; i++) {
		for (int j = 0; j < strlen(s)-1; ) {
			
			if (s[j] == 'B' && s[j + 1] == 'G')
			{
				swap(s[j], s[j + 1]);
				j += 2;
			}
			else
				j++;		
		}
	}
	for (int i = 0; i < strlen(s); i++)
		printf("%c", s[i]);

	return 0;
}