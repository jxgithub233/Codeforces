#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
struct rank {
	int n, m, h;
	int a[200][200] = { 0 };//内存太大了
}rk[1000];


//没通过测试
int main()
{
	int ca;
	cin >> ca;
	for (int i = 0; i < ca; i++) {
		cin >> rk[i].n >> rk[i].m >> rk[i].h;
		for (int j = 0; j < rk[i].n; j++) {
			for (int k = 0; k < rk[i].m; k++) {
				scanf("%d", &rk[i].a[j][k]);
				int h = rk[i].h;
				if (rk[i].a[j][k] <= h) {
					rk[i].a[j][rk[i].m]++;//通过的题数
					h -= rk[i].a[j][k];
					rk[i].a[j][rk[i].m + 1] += rk[i].a[j][k];//时长
				}
			}
		}
	}
	/*cout << endl;
	for (int i = 0; i < ca; i++) {
		
		for (int j = 0; j < rk[i].n; j++) {
			for (int k = 0; k < rk[i].m; k++) {
				cout << rk[i].a[j][k] << ' ';
			}
			cout << endl;
		}
	}*/

	for (int i = 0; i < ca; i++) {
		int rank = 1;
		for (int j = 1; j < rk[i].n; j++) {
				
			if (rk[i].n == 1) {
				rank = 1;
				break;
			}	
			else {
				if (rk[i].a[j][rk[i].m] > rk[i].a[0][rk[i].m])//通过的题数比较
						rank++;
				else if (rk[i].a[j][rk[i].m] == rk[i].a[0][rk[i].m]) {//题数相等
						if (rk[i].a[j][rk[i].m + 1] < rk[i].a[0][rk[i].m + 1])//比较时长
							rank++;
						else if (rk[i].a[j][rk[i].m + 1] == rk[i].a[0][rk[i].m + 1]) {//ru如果时长相等,比较罚时
							int minj = 10000,min0=10000;
							for (int t = 0; t < rk[i].m; t++) {
								if (rk[i].a[j][t] < minj)
									minj = rk[i].a[j][t];
								
								if (rk[i].a[0][t] < min0)
									min0 = rk[i].a[0][t];
							}
							rk[i].a[j][rk[i].m + 2] = minj + rk[i].a[j][rk[i].m + 1];
							rk[i].a[0][rk[i].m + 2] = min0 + rk[i].a[0][rk[i].m + 1];
							if (rk[i].a[0][rk[i].m + 2] > rk[i].a[j][rk[i].m + 2])
								rank++;
						}
				}
			}	
		}
		cout << rank << endl;
	}
	/*cout << endl;
	cout << rk[3].a[0][rk[3].m + 2]<<endl;
	cout << rk[3].a[1][rk[3].m + 2]<<endl;
	cout << rk[3].a[2][rk[3].m + 2]<<endl;*/
	return 0;
}