/*Sort array using bubble sort algorithm in descending order. Give a[0] as output, max.*/
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int j,i,a[10],max,c;
	cout<<"\nArray:\n";
	for(i=0;i<10;i++)
	{
		a[i]=rand()%100;
		cout<<a[i]<< "\t";
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[j]<a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	cout<<"\nMax:"<<a[0];
	return 0;
}
