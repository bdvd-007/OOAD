#include<iostream>
#include<stdlib.h>
using namespace std;
int partition(int a[],int beg,int end)
{
	int i,j,x,temp;
	x=a[end];
	i=beg-1;
	for(j=beg;j<end;j++)
	{
		if(a[j]<=x)
		{
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
		temp=a[end];
		a[end]=a[i+1];
		a[i+1]=temp;
		return i+1;
}
void quick_sort(int a[],int beg, int end)
{
	int q;
	if(beg<end)
	{
		q=partition(a,beg,end);
		quick_sort(a,beg,q-1);
		quick_sort(a,q+1,end);
	}
}

int main()
{
	int a[100],i,j,n;
	cout<<"\nEnter size:";
	cin>>n;
	cout<<"\n";
	for(i=1;i<=n;i++)
	{
		a[i]=rand()%100;
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	quick_sort(a,1,n);
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}