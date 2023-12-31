#include<iostream>
using namespace std;
int add(int x,int y)
{
    int carry;
    while(y!=0)
    {
        carry=x&y;
        x=x^y;
        y=carry<<1;
    }
    return x;
}
main()
{
    cout<<"enter the number to be added.\n";
    int x,y;
    cin>>x>>y;
    cout<<"sum="<<add(x,y);
    return 0;

}

