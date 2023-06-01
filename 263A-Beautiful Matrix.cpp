#include <iostream>
using namespace std;

int main(){
	int arr[5][5];
	int r,l;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			cin>>arr[i][j];
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++){
			if(arr[i][j]){
				r=i;
				l=j;
			}
		}
		if(r>2)
			r=r-2;
		else
			r=2-r;
		if(l>2)
			l=l-2;
		else
			l=2-l;
		cout<<r+l;

	return 0;
}