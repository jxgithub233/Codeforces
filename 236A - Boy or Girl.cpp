#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
using namespace std;

const int N = 100 + 5;
char s[N];//store name
char al[27];//alp
int cnt[26] = { 0 };//count
int main()
{
	char c = 'a';
	for (int i = 0; i < 26; i++)
		al[i] = c++;
	cin >> s;

	for(int i=0;i<strlen(s);i++)
		for (int j = 0; j < 26; j++) 
			if (s[i] == al[j])
				cnt[j]++;
		

	int count = 0;
	for (int i = 0; i < 26; i++)
		if (cnt[i] >= 1)
			count++;
	
	if (count % 2 == 0)
		printf("CHAT WITH HER!");
	else
		printf("IGNORE HIM!");
	
	return 0;
}