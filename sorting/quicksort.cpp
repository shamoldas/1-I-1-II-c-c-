#include<iostream>
using namespace std;
int partition(int arr[],int p,int r);
int quicksort(int arr,int len)
{
	
}
int main()
{
	int p,r,x,i,l,q,n,k,b;
	cout<<"enter_total_number_of_elements.\n";
	cin>>n;
	int a[n];
	cout<<"enter_"<<n<<"_elements.\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	partition(a,p,r);
	partition(a,p,q-1);
	quicksort(a,q+1,r);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"->";
	}
	return 0;
}
int partition(int arr[],int p,int r)
	{
	int i,x,k,	
	r=n-1;
	p=0;
	x=a[r];
	cout<<"a["<<r+1<<"]:"<<x<<endl;
	i=p-1;
	for(k=p;k<r-1;k++)
	{
		if(a[k]<=x)
		i=i+1;
		a[i]=a[k];
	}
	a[i+1]=a[r];
	return i+1;
}
