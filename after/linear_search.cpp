#include<iostream>
using namespace std;
main()
{
    int i,n,a;
    cout<<"input array size.\n";
    cin>>n;
    cout<<"input"<<n<<" element.\n";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number to be find:\n";
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a==arr[i])
            cout<<a<<" found the location "<<i+1<<endl;
    }
    if(a>n)
        cout<<"the number is not found.\n";
        cout<<"END.\n";
    return 0;
}
