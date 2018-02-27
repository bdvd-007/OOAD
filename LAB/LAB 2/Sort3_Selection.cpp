//Selection Sort
#include<stdlib.h>
#include<iostream>
#include <sys/time.h>
using namespace std;
int mini(int a[7],int i)
{
    int k, min,minp;
    min=a[i];
    for(k=i+1;k<7;k++)
    {
        if(a[k]<=min)
            {
                min=a[k];
                minp=k;
            }
    }
    return minp;
}
int main()
{

    int a[7],i,j,l,k,c;
    struct timeval start, end;

    long mtime, seconds, useconds;    

    gettimeofday(&start, NULL);
 	for(l=0;l<100;l++)
 	{
	    for(i=0;i<7;i++)
	        a[i]=rand()%1000;
	
	   for(i=0;i<7;i++)
	   {
	       k=mini(a,i);
	       {
	           c=a[k];
	           a[k]=a[i];
	           a[i]=c;
	       }
	    }
	   cout<<"\n";
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