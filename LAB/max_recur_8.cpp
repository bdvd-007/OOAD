/*Recursive call to function that takes the array, first index, and last index as parameters. Find maximum of
 left part of array, maximum of right part of array by recursive call. Finally compare the two and return the 
 maximum among them. */
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int maxi(int p[10],int a,int b)
{
	int mid,ml,mr;
	if(a==b)
	{
		return p[a];
	}
	if(b==a+1)
	{
		if(p[b]>p[a])
			return p[b];
		else
			return p[a];
	}
	mid=(a+b)/2;
	ml=maxi(p,a,mid);
	mr= maxi(p,mid+1,b);
	if(ml>mr)
        return ml;
	else
        return mr;
}
int main()
{

	int j,i,a[10],max,n;
	cout<<"\nArray:\n";
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		cout<<a[i]<< "\t";
	}
	n=10;
	max=maxi(a,0,9);
	cout<<"\nMax:"<<max;
	return 0;
}
