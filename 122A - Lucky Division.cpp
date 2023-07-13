#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int  main()
{
	int n;
	cin >> n;
	int a[] = { 4,7,44,47,74,77,444,447,474,477,744,747,774,777 };
	for (int i = 0; i < sizeof(a)/sizeof(int); i++) {
		
			if (n%a[i]==0) {
				cout << "YES";
				return 0;
			}
		
	}

	cout << "NO";
	return 0;
}