//problem
#include<stdio.h>
main()
{
    int i,n,j,k,arr[77];
    printf("input array size.\n");
    scanf("%d",&n);
    arr[n];
    printf("enter %d element.\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;)
        {
            if(arr[j]==arr[i])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
            }
            else
                j--;
        }
    }
    printf("\n display.\n");
    printf("\n current list:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}


