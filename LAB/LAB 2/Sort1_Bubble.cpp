//Bubble Sort
#include<iostream>
#include <sys/time.h>
#include<stdlib.h>
using namespace std;
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
		for(i=0;i<7;i++)
		{
			for(j=i;j<7;j++)
			{
				if(a[i]>a[j])
				{
					c=a[i];
					a[i]=a[j];
					a[j]=c;
				}
			}
		}
		cout<<"\nSorted:\n";
		for(i=0;i<7;i++)
			cout<<a[i]<<" ";
		cout<<"\n"; 
	}
	gettimeofday(&end, NULL);

    seconds  = end.tv_sec  - start.tv_sec;
    useconds = end.tv_usec - start.tv_usec;

    mtime = ((seconds) * 1000 + useconds/1000.0) + 0.5;

    printf("Elapsed time: %ld milliseconds\n", mtime);
	return 0;
}