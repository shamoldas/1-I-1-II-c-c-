#include<stdio.h>
int main()
{
    int arr[22],i,j,k,size;
    printf("enter arry size.\n");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("arry with unique list..\n");
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[j]=arr[i])
               {
                  for(k=j;k<size;k++)
                    {
                        arr[k]=arr[k+1];
                    }
                    size--;
               }
               else
                j++;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
