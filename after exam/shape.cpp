#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,i,b,c,j;
    char s;
    cout<<"input a charter.\n";
    cin>>s;
    if(s=='d')
    {
        for(i=0;i<=5;i++)
        {
            cout<<s;
           // cout<<s;
        }
        cout<<endl;
        for(i=0;i<=3;i++)
        {
            cout<<s<<s<<"   "<<s<<s;
            cout<<endl;
        }
       // cout<<endl;
        for(i=0;i<=5;i++)
        {
            cout<<s;
            //cout<<s;
        }
    }
    else
        cout<<"carry on.";

    return 0;
}
