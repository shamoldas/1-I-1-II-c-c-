
#include<stdio.h>
int main()
{
    int arr[22],n,i,l,a,b;
    printf("enter the number of element.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n enter the number you want to search.\n");
    scanf("%d",&l);
    i=0;
    while(i<n&&l!=arr[i])
    {
        i++;
    }
    if(i<n)
    {
        printf("number found at the location %d",i+1);
    }
    else
    {
        printf("number is not found.");
    }
    return 0;
}
