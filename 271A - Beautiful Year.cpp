#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	for (int i = n+1; i <= 9876; i++) {//ע��,��Ŀ˵������ķ�ΧС��9000,������ķ�ΧӦ�ò�����9012
		int num = i;
		int a = num % 10;
		num /= 10;
		int b = num % 10;
		num /= 10;
		int c = num % 10;
		num /= 10;
		int d = num % 10;
		if (a != b && a != c && a != d && b != c && b != d && c != d) {
			printf("%d", i);
			break;
		}
	
	}





	return 0;
}