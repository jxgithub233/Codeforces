#include <iostream>
using namespace std;
#define N 101
int main()
{
	int n,k;
	int arr[N];
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	if(arr[k-1]>arr[k]&&arr[k-1]>0)
		cout<<k;
	else if(arr[k-1]==arr[k]&&arr[k-1]>0){
		
		while(arr[k-1]==arr[k]){
			k++;
		}
		cout<<k;	
	}		
	else
	{		
		int i;
		for(i=0;i<k;i++){
			if(arr[i]==0)
				break;
		}
		cout<<i;	
	}
	return 0;
}
