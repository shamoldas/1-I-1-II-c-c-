

#include<stdio.h>
main()
{
    int i,n,f,l,m,d,e,arr[77],arr2[22],res[66],j,k;
    printf("input array size.\n");
    scanf("%d",&n);
    arr[n];
    printf("enter %d element.\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
       printf("input second array size.\n");
    scanf("%d",&m);
    arr2[m];
    printf("enter %d element.\n",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i<n&&j<m)
    {
        if(arr[i]<=arr2[j])
        {
            res[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            res[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n)
    {
        res[k]=arr[i];
        i++;
        k++;
    }
    while(j<m)
    {
        res[k]=arr2[j];
        j++;
        k++;
    }
    printf("\n merge of the array:");
    for(i=0;i<n+m;i++)
    {
        printf("%d ",res[i]);
    }
    return 0;
}
