/* Take max as first element of array,for loop from 0 to n/2, compare a[i] and a[n-i-1], and then compare the 
maximum of the two with max*/
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a[10],max,i,maxI,n;
	cout<<"\nArray:";
    n=10;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
		cout<<a[i]<<" ";
	}
	max=a[0];
	for(i=0;i<n/2;i++)
	{
		if(a[i]>a[n-i])
			maxI=a[i];
		else
			maxI=a[n-i];
		if(max<maxI)
			max=maxI;
	}
	cout<<"\nMax:"<<max;
	return 0;
}
