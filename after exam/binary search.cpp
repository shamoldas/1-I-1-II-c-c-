

//easy in this technich.
#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[44],sear,first,last,middle;
    cout<<"enter total number of element.\n";
    cin>>n;
    cout<<"input  "<<n<<" number.\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter a number of find.\n";
    cin>>sear;
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<sear)
        {
            first=middle+1;
        }
        else if(arr[middle]==sear)
        {
            cout<<sear<<"  found at location  "<<middle+1<<endl;
            break;
        }
        else
        {
            last=middle-1;
        }
        middle=(first+last)/2;
    }
    if(first>last)
    {
        cout<<"not found "<<sear<<" is not present this element";
    }
    return 0;
}
