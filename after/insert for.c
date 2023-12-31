
#include<stdio.h>
main()
{
    int i,n,f,l,m,d,e,arr[77];
    printf("input array size.\n");
    scanf("%d",&n);
    arr[n];
    printf("enter %d element.\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n input the number to be insert.\n");
    scanf("%d",&e);
    printf("\n input location of the element to be insert number.\n");
    scanf("%d",&l);
    //while(l>n)
    for(i=n;i>=l;i--)
    {
        arr[i]=arr[i-1];
       // l--;
    }
    n++;
    arr[l-1]=e;

    printf("\n current list:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}


