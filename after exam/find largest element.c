#include<stdio.h>
int main()
{
    int a[33],i,n,l;
    printf("enter no of element.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    printf("\n largest element:%d",l);
    printf("\n\n");
    return 0;
}
