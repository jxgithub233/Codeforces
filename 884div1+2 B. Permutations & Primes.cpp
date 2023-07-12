#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
const int N = 2 * 1e5 + 100;
int q[N] = { 0 };

//没通过第二个测试

int is_prime(int x) {
	if (x == 2)
		return 1;
	if (x == 0 || x == 1 || x % 2 == 0)
		return 0;
	for (int i = 3; i * i <= x; i += 2)
		if (x % i == 0)
			return 0;
	return 1;
}


int main()
{
	int t;
	cin >> t;
	while (t--) {

		int n;
		cin >> n;
		if (n == 1)
			cout << 1 ;
		else if (n == 2)
			cout << 2 << ' ' << 1 ;
		else if (n == 3)
			printf("%d %d %d", 2, 1, 3);
		else if (n == 4)
			printf("%d %d %d %d", 2, 1, 4, 3);
		else if (n == 5)
			printf("%d %d %d %d %d", 5, 2, 1, 4, 3);
		else {
			int i= N / 2,j=i+1;
			
			q[i] = 1; q[j] = 4;
			i--; j++;
			q[i] = 2; q[j] = 3;
			i--; j++;
			int m= n- 4; int k = 5;

			while (m--) {
				q[i--] = k++;
				q[j++] = k++;
			}
			int cnt = n;

			int ii = N / 2 - (n / 2 + 1);
			if (n % 2 == 0)ii += 2;
			else ii++;
			for (;; ii++)
			{
				if (cnt ==0 )break;
				int flag = 0;
				
				if (q[ii] != 0) {
						printf("%d ", q[ii]);
						flag = 1; cnt--;
				}
				if (flag == 1 && q[ii] == 0)
					break;
			}
		}
		cout << endl;
	}

	return 0;
}



