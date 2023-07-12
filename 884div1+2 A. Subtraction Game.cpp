#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//ac
int pick(int n, int a, int b) {
	if (n >= a || n >= b)
		return 1;
	else return 0;
}
int main()
{
	int t,k=1;
	cin >> t;
	while (t--) {
		int a, b,n=1;
		cin >> a >> b;
		if (a == 1&&b!=2)
			cout << 2 << endl;
		else if (a == 1 && b == 2) {

			cout <<3 << endl;
		}
		else{
			for (n = 1;; n++) {
				if (k==1 && !pick(n,a,b))
					break;
				else if (k==1 && pick(n,a,b)) {
					k = !k;
				}
				else if (k == 0 && pick(n, a, b)) {
					k = !k;
				}
			}
			cout << n << endl;
		}

	}





	return  0;
}