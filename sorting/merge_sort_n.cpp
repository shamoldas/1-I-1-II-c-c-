
//workit_same_algorithm
#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
	{
		L[i]=arr[l+i];
	}
	for(j=0;j<n2;j++)
	{
		R[j]=arr[m+1+j];
	}
	i=0,j=0,k=l;
	while(i<n1&&j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}
void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
void printarray(int A[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<A[i]<<" ->";
	}
}
int main()
{
	int arr[]={12,13,11,5,8,7};
	int arr_s=sizeof(arr)/sizeof(arr[0]);
	cout<<"currect array:";
	printarray(arr,arr_s);
	mergesort(arr,0,arr_s-1);
	cout<<"\n\n";
	cout<<"after merge sort:";
	printarray(arr,arr_s);
	return 0;
}
