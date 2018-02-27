#include<iostream>
#include <sys/time.h>
#include<stdlib.h>
using namespace std;
void merge(int a,int s, int e)
{
	if(s+1==e)
	{
		
	int mid=(s+e)/2;
	int b[7],c[7],j=0,k=0,m;
	for(i=0;i<mid;i++)
		b[i]=a[s+i];
	for(i=mid;i<n;i++)
	{
		c[j]=a[s+i];
		j++;
	}
	i=0;
	j=0;
	k=0;
	while(i>0&&j>0)
	{
		if(b[i]<c[j])
		{
			a[k]=b[i];
			i--;
			k++;
		}
		else
		{
			a[k]=c[j];
			j--;
			k++;
		}
	}
	if(i==0)
	{
		while(k<n)
		{
			a[k]=c[j];
			k++;
			j--;
		}
	}
	else
	{
		while(k<n)
		{
			a[k]=b[i];
			k++;
			i--;
		}	
	}
int main()
{
	int a[7],i,j,c,l;
	  struct timeval start, end;

    long mtime, seconds, useconds;    

    gettimeofday(&start, NULL);
	for(l=0;l<100;l++)
	{
		for(i=0;i<7;i++)
			a[i]=rand()%1000;
		