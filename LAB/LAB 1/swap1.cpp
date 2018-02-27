#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int ch,a,b;
	char d,e;
	float p,q;
	while(ch!=4)
    {
        cout<<"\nEnter 1. Swap integers\t2. Swap float\t3.Swap char\t4. Exit:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                    cout<<"\nEnter the numbers to be swapped:";
                    cin>>a>>b;
                    b=a+b;
                    a=b-a;
                    b=b-a;
                    cout<<"\nSwapped values:\na="<<a<<"\nb="<<b;
                    break;
            case 2:
                    cout<<"\nEnter the floating point integers to be swapped:";
                    cin>>p>>q;
                    p=q+p;
                    q=p-q;
                    p=p-q;
                    cout<<"\nSwapped values:\np="<<p<<"\nq="<<q;
                    break;
            case 3:
                    cout<<"\nEnter the characters to be swapped:";
                    cin>>d>>e;
                    d=e+d;
                    e=d-e;
                    d=d-e;
                    cout<<"\nSwapped values:\nd="<<d<<"\ne="<<e;
                    break;
        }
	}
}
