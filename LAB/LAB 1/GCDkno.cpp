#include<stdio.h>
#include<iostream>
using namespace std;
int m=0;
int gcd(int a, int b)
{
	if(a==0&&b==0)
	{
		m++;
		return 0;
	}
	else
	if((a==0||b==0))
	{
		if(a!=0) return a;
		if(b!=0) return b;
	}
	if(a==b)
		return a;
	if(a>b)
		return gcd(a-b,b);
	if(b>a)
		return gcd(a,b-a);
}
int main()
{
	int a[10],b,k,i,g;
	cout<<"Enter no. of numbers";
	cin>>k;
	cout<<"\nEnter numbers:";
	for(i=0;i<k;i++)
		cin>>a[i];
    for(i=0;i<k-1;i++)
    {
        a[i+1]=gcd(a[i],a[i+1]);
    }
    g=a[k-1];
    if(m==k-1)
        cout<<"\nGCD NOT DEFINED!!\n";
    else
        cout<<"\nGCD:"<<g;

	return 0;
}
