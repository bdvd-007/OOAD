#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int isprime(int n)
{
    int i;
    if(n==0||n==1)
    return 0;
    for(i=2;i<(int)sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int max=0,n,i,k;
    for(n=4;n<=100;n=n+2)
    {
        k=0;
        for(i=2;i<n;i++)
        {	
            if(isprime(i))
            {
                if(isprime(n-i))
                {
	                cout<<n<<"\n";
                    max=n;
                    k++;
                    break;
                }
            }    
        }
        if(k==0) break;
    }
    cout<<"\nMax no:"<<max<<"\n";
    return 0;
}