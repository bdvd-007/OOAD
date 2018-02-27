#include<stdio.h>
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	if(a==0&&b==0)
	{
		cout<<"GCD DOES NOT EXIST!!";
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
		gcd(a-b,b);
	if(b>a)
		gcd(b-a,a);
}
int main()
{
	int a,b,g;
	cout<<"\nEnter two numbers:";
	cin>>a>>b;
	g=gcd(a,b);
	if(g!=0)
	cout<<"GCD:"<<g;
	return 0;
}