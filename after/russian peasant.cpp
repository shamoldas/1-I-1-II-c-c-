//multiply both number//

#include<iostream>
using namespace std;
unsigned int add(unsigned int a,unsigned int b)
{
    int res=0;
    while(b>0)
    {
        if(b&1)
        res=res+1;
        a=a<<1;
        b=b>>1;

    }
    return res;
}
main()
{
    cout<<"enter the number to be added.\n";
    int x,y;
    cin>>x>>y;
    cout<<"sum="<<add(x,y);
    return 0;

}


