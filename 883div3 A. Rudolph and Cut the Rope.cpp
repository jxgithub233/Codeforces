#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
struct rope {
	int hight[51];
	int length[51];
	int len;
}rp[10000+10];

//ac
int main()
{
	int ca;
	cin >> ca;
	for (int i = 0; i < ca; i++) {
		cin >> rp[i].len;
		for (int j = 0; j < rp[i].len; j++) {
			scanf("%d%d", &rp[i].hight[j], &rp[i].length[j]);
		}
	}
	/*cout << endl;*/
	int cnt = 0;
	for (int i = 0; i < ca; i++) {
		cnt = 0;
		for (int j = 0; j < rp[i].len; j++) {
			if (rp[i].hight[j] > rp[i].length[j])
				cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}