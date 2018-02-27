/*initialise: i=0, j=n-1;Compare a[i] and a[j]. Assign the maximum of the two to a[i]. increment i by 1 and 
decrease j by 1 while i<j. Now assign n=n/2,i=0,j=n-1, while n>0. */
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
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
	i=0;
	j=n-1;
	while(n>0)
	{
	    while(i<j)
		{if(a[i]<a[j])
			a[i]=a[j];
		i++;
		j--;
		}
		n=n/2;
		i=0;
		j=n-1;
	}

	cout<<"\nMax:"<<a[0];
	return 0;
}
