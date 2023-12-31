#include<stdio.h>
main()
{
    int i,n,f,l,m,s,as,arr[77];
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
    printf("\n input search number.\n");
    scanf("%d",&s);
    f=0;
    l=n-1;
    m=(f+l)/2;
    while(f<=l)
    {
        if(arr[m]<s)
            f=m+1;
        else if(arr[m]==s)
        {
            printf("%d found the location %d ",s,m+1);
            break;
        }
        else
            l=m-1;
        m=(l+f)/2;
    }
    if(f>l)
        printf("%d is not the location.\n",s);
    return 0;
}

