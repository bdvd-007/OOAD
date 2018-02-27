#include<stdio.h>
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	/*if(a==0&&b==0)
	{
		cout<<"GCD DOES NOT EXIST!!";
		return 0;
	}
	else*/
	if((a==0||b==0))
	{
		if(a!=0) return a;
		if(b!=0) return b;
	}
	if(a==b)
		return a;
	if(a>b)
		gcd(a-b,b);
	if(b>a)
		gcd(a,b-a);
	if(a==0&&b==0)
	{
		cout<<"GCD DOES NOT EXIST!!";
		return 0;
	}
}
void gcdk(int a[10],int k)
{
    int i,j;
    for(i=0;i<k-1;i++)
    {
        a[i+1]=gcd(a[i],a[i+1]);
    }
	cout<<"\nGCD:"<<a[k-1];
}
int main()
{
	int a[10],b,k,i,g;
	cout<<"Enter no. of numbers";
	cin>>k;
	cout<<"\nEnter numbers:";
	for(i=0;i<k;i++)
		cin>>a[i];
	gcdk(a,k);
	return 0;
}
