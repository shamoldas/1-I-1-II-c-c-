
#include<stdio.h>
main()
{
    int i,n,f,l,arr[77];
    printf("input array size.\n");
    scanf("%d",&n);
    arr[n];
    printf("enter %d element.\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            l=arr[i];
        }
    }
    printf("large element:%d\n",l);
    return 0;
}

