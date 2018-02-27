//Insertion Sort
#include<stdlib.h>
#include <sys/time.h>
#include<iostream>
using namespace std;
int main()
{

    int a[7],i,j,k,c,l;
    struct timeval start, end;

    long mtime, seconds, useconds;    

    gettimeofday(&start, NULL);
    for(l=0;l<100;l++)
    {
	    for(i=0;i<7;i++)
	        a[i]=rand()%1000;
	    for(i=1;i<7;i++)
	   {
	       k = a[i];
	       j = i-1;
	       while (j>=0&&a[j]>k)
	       {
	           a[j+1] = a[j];
	           j = j-1;
	       }
	       a[j+1]=k;
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