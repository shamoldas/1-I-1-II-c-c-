#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int a,b,c,n,arr[5]={223,34,56,44,33},arry[3]={23,78,45};
    sort(arr,arr+5,greater<int>());
   // sort(arry,arry+5);
    for(a=0;a<5;a++)
    {
        cout<<"a="<<arr[a];
        cout<<endl;
        //cout<<endl<<"arry="<<arry[a];
    }
    return 0;

}
