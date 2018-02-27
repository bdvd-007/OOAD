#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void randomsort(int a[],int n)
{
	int i,j,temp,index1, index2,count=0;
	while(count<n*10)
	for(i=0;i<n;i++)
	{
		index1=rand()%n;
		//srand(time(NULL));
		index2=rand()%n;
		if(index1>index2)
		{
			temp=index1;
			index1=index2;
			index2=temp;
		}
		if(a[index1]>a[index2])
		{
			temp=a[index1];
			a[index1]=a[index2];
			a[index2]=temp;
		}
		count++;
	}
}
void bubblesort(int a[], int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int c[100],j,a[100],b[100],num=0,n,i,k=0;
	n=10;
	/*for(k=0;k<n;k++)
	cin>>c[k];
	bubblesort(c,n);cout<"\n";
	for(k=0;k<n;k++)
	cout<<c[k]<<" "; cout<<"\n";*/
	for(j=0;j<100;j++)
	{
		k=0;
		cout<<"\n\n\n";
		for(i=0;i<n;i++)
		{
			a[i]=rand()%1000;
			//srand(time(NULL));
			b[i]=a[i];
			cout<<a[i]<<" ";
		}	
		randomsort(a,n);
		bubblesort(b,n);
		cout<<"\nSorted:\n";
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"\n";
			for(i=0;i<n;i++)
		{
			cout<<b[i]<<" ";
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==b[i])
				k++;
		}
		if(k==n)
			num++;
	}
		cout<<"\nNumber of successful sorts="<<num;
		return 0;
}

