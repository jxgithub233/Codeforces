#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

bool is_vowels(char c)
{
	if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u'||c=='Y'||c=='y')
		return true;
	else
		return false;
}

char change(char c) {
	if (c >= 'A' && c <= 'Z')
		return c - 'A' + 'a';
	else
		return c;
}

int main()
{

	char s[105];
	scanf("%s",s);

	for (int i = 0; s[i] != '\0'; i++) {
		if(is_vowels(s[i]))
			continue;
		else {
			printf(".%c", change(s[i]));
		}
	}


	return 0;
}