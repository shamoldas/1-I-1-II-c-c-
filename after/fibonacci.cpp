#include<iostream>
#include<string.h>
#include<stdlib.h>
#define ll long long
using namespace std;
int result[11000]={0};
ll fibo_iter(int n)
{

    int previous=1;
    int current=1;
    int next=1;
    for(int i=3;i<=n;++i)
    {
        next=current+previous;
        previous=current;
        current=next;
    }
    return next;
}
int main()
{
    int n;
    while(1)
    {
        cout<<"enter integer n to find nth fibonnaci no(0 to exit)"<<endl;
        cin>>n;
        if(n==0)
            break;
        cout<<fibo_iter(n)<<endl;
    }
    return 0;
}


