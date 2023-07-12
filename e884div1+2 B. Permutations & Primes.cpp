#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//by yingluosanqian
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n == 1 || n == 2) {
			for (int i = 1; i <= n; i++) {
				cout << i << ' ';
					if (i == n)cout << endl;
			}
		}
		else {
			cout << 3;
			for (int i = 4; i <= n; i += 2) {
				cout << ' ' << i;
			}
			cout << " 1";
			for (int i = 5; i <= n; i += 2) {
				cout << ' ' << i;
			}
			cout << " 2\n";
		}
	}

	return 0;
}