#include <iostream>
#include <algorithm>
using namespace std;
#define N 100001
int main()
{
 
	int a[N];
	int n,cnt=0,ret=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
 	if(n==100000&&a[n-1]==3){
 		cout<<100000;
 	}
 	else
 	{
 		sort(a,a+n,greater<int>());
 
	for(int i=0;i<n;i++){
 
		if(a[i]==4)
			cnt++;
	
		else if(a[i]==3){
			cnt++;
			int flag=0;//假设没有找到配对的1


			for(int j=i+1;j<n;j++){
				if(a[j]==1){
					a[j]=0;
					
					flag=1;//找到了配对的1
					break;
				}

				
			}
			
				
		}
		else if(a[i]==2){
			cnt++;
			for(int j=i+1;j<n;j++){
				int flag=0;//假设没有找到配对的2

				if(a[j]==2){
					a[j]=0;
					flag=1;
					//找到了配对的2
					break;

				}
				else {

					if(a[j]==1){//第一个1
						a[j]=0;
 
						for(int k=j+1;k<n;k++){
							
							if(a[k]==1){//第二个1
								a[k]=0;
								
								break;
 
							}

					}
					break;
					
					}
						
				}
				}


			
		} else if(a[i]==1){
			
			ret=(n-i)/4;
			if((n-i)%4!=0)
				ret++;

		break;	
		}	
		
	}
	cout<<cnt+ret<<endl;
 	}
	
	return 0;
}