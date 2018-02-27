#include<stdio.h>
#include<iostream>
using namespace std;
int N=0,s,h[10];
void insert(int a)
{
	int p,i,temp;
	if(N>=s)
	{
		cout<<"\nHeap is full!!";
		return;
	}
	else 
	{
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
}
void delete1()
{	
	int a,t,l,r,k,x,y;	
	if(N==0)
	{
		cout<<"\nHeap Empty!!";
		return;
	}
	t=h[1];
	h[1]=h[N];
	N--;
	int flag=0,i=1;
	while(flag==0&&i<N)
	{
		l=2*i;
		r=(2*i)+1;
		if(l<=N)
		x=h[l];
		else
		x=-1;
		if(r<=N)
		y=h[r];
		else
		y=-1;
		if(h[i]>x&&h[i]>y)
		flag=1;
		else if(x>y&&h[i]<x)
		{
		//swap(h[i],h[l]);
			k=h[i];
			h[i]=h[l];
			h[l]=k;		
			i=l;
		}
		else if(x<y&&h[i]<y)
		{
		//swap(h[i],h[r]);
			k=h[i];
			h[i]=h[r];
			h[r]=k;	
			i=r;
		}
		}
}
/*		
void sort()
{
	int i;
	i=N;
	while(i>1)
	{
		swap(h[1],h[i]);
		i	*/
int main()
{
	int i,a,ch;
	cout<<"\nEnter max size:";
	cin>>s;
	do
	{
		cout<<"\n1.Insert\t2.Sort\t3.Display\t4.Exit";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\nElement to be entered:";
					cin>>a;
				insert(a);
				break;
			case 2: while(N!=0)
				{
					cout<<h[1]<<" ";
					delete1();
				}
				break;
			case 3: cout<<"\n";
					for(i=1;i<=N;i++)
					cout<<h[i];
				break;
		}
	}while(ch!=4);
	return 0;
}


	
