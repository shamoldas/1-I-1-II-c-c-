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
    printf("\n enter the location of the element to be delete.\n");
    scanf("%d",&l);
    while(l<n)
    {
        arr[l-1]=arr[l];
        l++;
    }
    l--;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
