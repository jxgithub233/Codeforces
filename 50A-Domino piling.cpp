#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int len,wid,ext=0;
	if(m%2==0){
		len=m/2;
		wid=n;
	}
	else if(n%2==0){
		len=n/2;
		wid=m;
	}
	else{
		len=(n-1)/2;
		wid=m;
		ext=m/2;
	}
	cout<<len*wid+ext;

	return 0;
}