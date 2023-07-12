#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
struct ttt
{
	char tt[4][4];
}t[10000 + 10];

int main()
{
	int ca;
	cin >> ca;
	for (int i = 0; i < ca; i++) {
		for (int j = 0; j < 3; j++)
			cin >> t[i].tt[j];
	}
	/*cout << endl;
	for (int i = 0; i < ca; i++) {
		for (int j = 0; j < 3; j++)
			cout << t[i].tt[j] << endl;
	}*/
	for (int i = 0; i < ca; i++) {
		if (t[i].tt[0][0] == t[i].tt[0][1] && t[i].tt[0][1] == t[i].tt[0][2]&& t[i].tt[0][2]!='.')
			cout << t[i].tt[0][0]<<endl;
		else if (t[i].tt[1][0] == t[i].tt[1][1] && t[i].tt[1][1] == t[i].tt[1][2]&& t[i].tt[1][2]!='.')
			cout << t[i].tt[1][0]<<endl;
		else if (t[i].tt[2][0] == t[i].tt[2][1] && t[i].tt[2][1] == t[i].tt[2][2]&& t[i].tt[2][2] !='.')
			cout << t[i].tt[2][0]<<endl;
		else if (t[i].tt[0][0] == t[i].tt[1][0] && t[i].tt[1][0] == t[i].tt[2][0]&& t[i].tt[2][0]!='.')
			cout << t[i].tt[0][0]<<endl;
		else if (t[i].tt[0][1] == t[i].tt[1][1] && t[i].tt[1][1] == t[i].tt[2][1]&& t[i].tt[2][1]!='.')
			cout << t[i].tt[0][1]<<endl;
		else if (t[i].tt[0][2] == t[i].tt[1][2] && t[i].tt[1][2] == t[i].tt[2][2]&& t[i].tt[2][2]!='.')
			cout << t[i].tt[0][2]<<endl;
		else if (t[i].tt[0][0] == t[i].tt[1][1] && t[i].tt[1][1] == t[i].tt[2][2]&& t[i].tt[2][2]!='.')
			cout << t[i].tt[0][0]<<endl;
		else if (t[i].tt[0][2] == t[i].tt[1][1] && t[i].tt[1][1] == t[i].tt[2][0]&& t[i].tt[2][0]!='.')
			cout << t[i].tt[0][2]<<endl;
		else
			cout << "DRAW"<<endl;
	}

	return 0;
}