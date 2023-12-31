#include<iostream>
#include<string.h>
#include<stdlib.h>
#define ll long long
using namespace std;
int result[11000]={0};
ll fact_dp(int n)
{
    if(n>=0)
    {
        result[0]=1;
        for(int i=1;i<=n;++i)
        {
            result[i]=i*result[i-1];
        }
        return result[n];
    }
}
int main()
{
    int n;
    while(1)
    {
        cout<<"enter integer to be compute factorial(0 to exit)"<<endl;
        cin>>n;
        if(n==0)
            break;
        cout<<fact_dp(n)<<endl;
    }
    return 0;
}

