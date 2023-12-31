#include<stdio.h>
#include<iostream>
using namespace std;
void quicksort(int *a,int len)
{
    int i,k,pivot,temp;
    if(len<2)
    return ;
    pivot=a[len/2];
    for(i=0;k=len-1;i++,k--)
    {
    	while(a[i]<pivot)
    	i++;
    	while(a[k]>pivot)
    	k--;
    	if(i>=k)
    	break;
    	temp=a[i];
    	a[i]=a[k];
    	a[k]=temp;
    }
    quicksort(a,i);
    quicksort(a+i,len-i);
}
int main()
{
    int i,c,n,number[5]={6,5,46,78,63};
   /* printf("enter how many element do you want.\n");
    printf("enter the number.\n");
    scanf("%d",&c);
    printf("enter %d element.\n",c);
    for(i=1;i<=c;i++)
    {
        scanf("%d",&number[i]);
    }*/
    printf("insert element:");
    for(i=0;i<5;i++)
    {
    	printf("%d ",number[i]);
    }
    n=sizeof number/sizeof number[0];
    quicksort(number,n);
    printf("\n ordered to sort element.\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",number[i]);
    }
    printf("end sort.\n THANK YOU.\n");
    return 0;
}


