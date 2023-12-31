#include<stdio.h>
int main()
{
    char name[3][33];
    int i,a,n;
    for(i=0;i<=3;i++)
    {
        scanf("%s",name[i++]);
    }
    for(i=0;i<=3;i++)
    {
        printf("%s\n",name[i++]);
    }
    return 0;
}
