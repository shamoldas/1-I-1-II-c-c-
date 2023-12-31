#include<stdio.h>
int main()
{
    int arr[22],n,i,s;
    printf("enter number of element.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    s=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<s)
        {
            s=arr[i];
        }
    }
    printf("\n smallest element:%d",s);
    printf("\n\n");
    return 0;
}
