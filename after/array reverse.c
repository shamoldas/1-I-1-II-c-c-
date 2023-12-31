
#include<stdio.h>
main()
{
    int i,n,j,temp,k,arr[77];
    printf("input array size.\n");
    scanf("%d",&n);
    arr[n];
    printf("enter %d element.\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n current list:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
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
    printf("\nreverse current list:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

