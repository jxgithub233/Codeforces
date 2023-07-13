#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int k, n, w;
	scanf("%d%d%d", &k, &n, &w);
	if (k * (1 + w) * w / 2 - n > 0)
		printf("%d", k * (1 + w) * w / 2 - n);
	else
		printf("%d",0);
	return 0;
}