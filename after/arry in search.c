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
    printf("\n input search number.\n");
    scanf("%d",&s);
    i=0;
    while(i<n&&s!=arr[i])
    {
        i++;
    }
    if(i<n)
    {
        printf("%d number found of location %d\n",s,i+1);
    }
    else
    {
        printf("number not found.\n");
    }
    return 0;
}
