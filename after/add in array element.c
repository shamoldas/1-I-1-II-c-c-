
#include<stdio.h>
main()
{
    int i,n,f,l,arr[77],sum;
    printf("input array size.\n");
    scanf("%d",&n);
    arr[n];
    printf("enter %d element.\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("DISPLAY.\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("\n");
    printf("SUM:  %d\n",sum);
    return 0;
}


