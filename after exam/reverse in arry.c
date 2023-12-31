#include<stdio.h>
int main()
{
    int arr[33],i,j,n,temp;
    printf("enter number of element.\n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=i-1;
    i=0;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printf("result after reversal.\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
    return 0;
}
