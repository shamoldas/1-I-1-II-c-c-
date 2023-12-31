
#include<stdio.h>
main()
{
    int i,n,f,l,m,d,as,arr[77];
    printf("input array size.\n");
    scanf("%d",&n);
    arr[n];
    printf("enter %d element.\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n input location of the element to be delete number.\n");
    scanf("%d",&l);
    while(l<n)
    {
        arr[l-1]=arr[l];
        l++;
    }
    n--;
    printf("\n current list:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
