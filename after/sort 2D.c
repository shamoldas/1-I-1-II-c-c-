
#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,n,m,j,k,arr[77][77],temp,temp1;
    printf("input 2D array size.\n");
    scanf("%d %d",&n,&m);
    arr[n][m];
    printf("enter %d element.\n",n*m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        //scanf("%d",&arr[i]);
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if(arr[0][i]>arr[0][i+1])
            {
                temp=arr[0][i];
                arr[0][i]=arr[0][i+1];
                arr[0][i+1]=temp;

                temp1=arr[1][j];
                arr[1][j]=arr[1][j+1];
                arr[1][j+1]=temp1;
            }
        }
    }
    printf("\n after sorting array.\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


