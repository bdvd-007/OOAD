/*insert elements of array into max heap, and then give root as max, output*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int N=0,s,h[10];
void insert(int a)
{
	int p,i,temp;
	N++;
	h[N]=a;
	i=N;
	p=i/2;
	while(p>0&&h[p]<h[i])
	{
		temp=h[i];
		h[i]=h[p];
		h[p]=temp;
		i=p;
		p=p/2;
	}
}
int main()
{
        int i,a,ch;
		cout<<"\nArray:\n";
		for(i=0;i<10;i++)
        {
			a=rand()%100;
			cout<<a<<" ";
			insert(a);
        }
        cout<<"\nMax:"<<h[1];
        return 0;
}

	
