#include<stdio.h>
int main()
{
    int arr[3][3][3]=
    {
        {
            {11,23,23},{11,22,33},{55,66,77}
            },{{23,45,45}{34,56,78}{44,55,66}},{{12,23,45}{56,67,89}{1,2,3}}};
    int i,j,k;
    printf("3D arry.\n");
    for(i=0;i<3;i++)
    {
        for(j=1;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
