#include<stdio.h>
int main()
{
    int arr[22],arr2[22],res[44];
    int i,j,k,n1,n2;
    printf("number of element in 1st arry.\n");
    scanf("%d",&n1);
    printf("input %d element of 1st arry.\n",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("number no of element in 2nd arry.\n ");
    scanf("%d",&n2);
    printf("input %d element of second arry.\n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i<n1&&j<n2)
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
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        res[k]=arr[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        res[k]=arr2[j];
        k++;
        j++;
    }
    printf("\n\nmerge arry is\n\n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ",res[i]);
    }
    return 0;
}
