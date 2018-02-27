#include<iostream>
using namespace std;
 
int isprime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int r,k=2;
	while()
	{
		if(isprime(k))
		{
			if(isprime(n-k))
			{
				m=1;
				break;
			}
		}
		k++;
	}
	cout<<"\nMax no:"<<k;
	return 0;
}