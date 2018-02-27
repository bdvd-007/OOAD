/*take max as maximum of a[0] and a[1], then compare the rest of the elements of the array pairwise. Compare
 the maximum of the pair with max*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	int a[10],max,i,n,max1;
	cout<<"\nArray:";
    n=10;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
		cout<<a[i]<<" ";
	}
	max=a[0]>a[1]?a[0]:a[1];
	i=2;
	while(i<=n-2)
	{
		max1=a[i]>a[i+1]?a[i]:a[i+1];
		if(max1>max)
			max=max1;
		i=i+2;
	}
	cout<<"\nMax:"<<max;
	return 0;
}