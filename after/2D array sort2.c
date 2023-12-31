
#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,n,m,j,k,temp,temp1;
    int arr[66][46];//={{1,42,34,5,56,7},{141,22,345,44,55,66}};
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            if(arr[i][j]>arr[i][j+1])
            {
                temp=arr[i][j];
                arr[i][j]=arr[i][j+1];
                arr[i][j+1]=temp;
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


