#include<stdio.h>
int binsearch(int[],int ,int,int);
int main()
{
    int n,i,key,position;
    int low,high,list[22];
    printf("enter no of element.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
    low=0;
    high=n-1;
    printf("enter element to be search..\n");
    scanf("%d",&key);
    position=binsearch(list,key,low,high);
    if(position!=-1)
    {
        printf("\n number present at:%d",(position+1));
    }
    else
        printf("number is not present the list.\n");
        printf("\n\n");
    return 0;
}
int binsearch(int a[],int x,int low,int high)
{
    int mid;
    if(low>high)
        return-1;
    mid=(low+high)/2;
    if(x==a[mid])
       {
            return mid;
       }
    else if(x<a[mid])
    {
        binsearch(a,x,low,mid-1);
    }
    else
    {
        binsearch(a,x,mid+1,high);
    }
}
