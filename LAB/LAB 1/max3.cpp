/* Assign max as first element of array. Now compare this max with all the elements of the array and update it as a[i] 
if a[i]>max, Array: a[], i:array index */
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int i,a[10],max;
	cout<<"\nArray:\n";
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		cout<<a[i]<< "\t";
	}
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	cout<<"\nMax:"<<max;
}
