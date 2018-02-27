#include<iostream>
#include<stdlib.h>
using namespace std;
void Merge(int a[], int beg, int q, int end)
{
	int i,n1,n2, L[20],R[20],j,k;
	n1=q-beg+1;
	n2=end-q;
	for(i=1;i<=n1;i++)
		L[i]=a[beg+i-1];
	for(j=1;j<=n2;j++)
		R[j]=a[q+j];
	L[n1+1]=9999;
	R[n2+1]=9999;
	i=1;
	j=1;
	for(k=beg;k<=end;k++)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
	}
}

void Mergesort(int a[], int beg, int end)
{
	int q;
	if(beg<end)
	{
		q=(beg+end)/2;
		Mergesort(a,beg,q);
		Mergesort(a,q+1,end);
		Merge(a,beg,q,end);
	}
}

int main()
{
	int a[30],i,j,n;
	cout<<"\nEnter size:";
	cin>>n;
	cout<<"\nArray:";
	for(i=1;i<=n;i++)
	{
		a[i]=rand()%100;
		cout<<a[i]<<" ";
	}
	Mergesort(a,1,n);
	cout<<"\nSorted:";
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0;
}