#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
/*
int main()
{
	string s;
	cin >> s;
	int a = 0, b = 0, c = 0, d = 0,e=0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'h')
		{
			a = 1; continue;
		}
		if (s[i] == 'e') {
			b = 1; continue;
		}
		if (s[i] == 'l') {
			c = 1; 
			for (int j = i+1; j < s.size(); j++) {
				if (s[j] == 'l') {
					d = 1; break;
				}
			}
			continue;
		}
		
		if (s[i] == 'o') {
			e = 1; continue;
		}
	}
	if (a==1 && b==1 && c==1 && d==1 && e==1) cout << "YES";
	else cout << "NO";
	
	return 0;
}


*/
int main()
{
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++)
		if (s[i] == 'h') 
			for(int j=i+1;j<s.size();j++)
				if(s[j]=='e')
					for(int k=j+1;k<s.size();k++)
						if(s[k]=='l')
							for(int p=k+1;p<s.size();p++)
								if(s[p]=='l')
									for(int q=p+1;q<s.size();q++)
										if (s[q] == 'o') {
											cout << "YES";
											return 0;
										}
	cout << "NO";
	return 0;
}
