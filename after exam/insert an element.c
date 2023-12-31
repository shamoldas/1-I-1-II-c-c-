
#include<stdio.h>
int main()
{
    int arr[22],n,i,l,a,b;
    printf("enter the number of element.\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be inserted.\n");
    scanf("%d",&a);
    printf("\n enter the location.\n");
    scanf("%d",&l);
    for(i=n;i>=l;i--)
    {
        arr[i]=arr[i-1];
    }
    n++;
    arr[l-1]=a;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
