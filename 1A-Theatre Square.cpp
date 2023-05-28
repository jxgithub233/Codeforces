#include <iostream>
#include <math.h>
using namespace std;
long long my(long long x,long long y);
int main()
{
    long long m,n,a,number;
    cin>>m>>n>>a;
    cout<<my(m,a)*my(n,a)<<endl;
    return 0;
}

long long my(long long x,long long y)
{
    if(x%y){
        return (x/y)+1;
    }
    else
    return x/y;
}

//ceil(x)