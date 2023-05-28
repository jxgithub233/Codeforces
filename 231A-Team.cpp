#include <iostream>
using namespace std;

#define N 1000

int add(int arr[]);
int main()
{
	int a[N][3];
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin>>a[i][0];
		cin>>a[i][1];
		cin>>a[i][2];
	}
	for (int i = 0; i < n; i++) {
		if (add(a[i]) > 1)
			cnt++;
	}
	cout << cnt;
	return 0;
}

int add(int arr[]) {

	return (arr[0] + arr[1] + arr[2]);
}