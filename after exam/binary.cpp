

//easy in this technich.
#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[44],search,first,last,middle;
    cout<<"enter total number of element.\n";
    cin>>n;
    cout<<"input  "<<n<<" number.\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter a number of find.\n";
    cin>>search;
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<search)
        {
            first=middle+1;
        }
        else if(arr[middle]==search)
        {
            cout<<search<<"  found at location  "<<middle+1<<endl;
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
        cout<<"not found "<<search<<" is not present this element";
    }
    return 0;
}
