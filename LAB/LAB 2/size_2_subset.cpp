#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
	int a[7],i,n,j,k=0;
	cout<<"\nEnter size:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			cout<<a[i]<<" "<<a[j]<<"\n";
			k++;
		}
		cout<<"\nCOUNT="<<k;
	return 0;

}
