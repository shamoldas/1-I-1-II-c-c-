
#include<stdio.h>
int main()
{
    int arr[22],arr2[22],n,i,l,a,b;
    printf("enter the number of element.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    printf("print the copy in arry.\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr2[i]);
    }
    return 0;
}
