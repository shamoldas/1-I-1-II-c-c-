#include<stdio.h>
int main()
{
    int arr[33],n,i,sum;
    printf("enter no of element.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("printing all element in arry.\n");
    for(i=0;i<n;i++)
    {
        printf("\n a[%d]=%d",i,arr[i]);

//printf("\n sum=%d",sum);
    }
    printf("\n sum=%d",sum);
    printf("\n\n");
    return 0;
}
