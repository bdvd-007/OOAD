#include<stdio.h>
#include<iostream>
using namespace std;
void swapint(int &a, int &b)
{
	a=a^b;
	b=a^b;
	a=a^b;
}
void swapchar(char &a, char &b)
{
	a=a^b;
	b=a^b;
	a=a^b;
}
int main()
{
	int a,b,ch;
	float p,q;
	char m,n;
	while(ch!=3)
    {
        cout<<"\nEnter to swap \n1-int\t2-char\t3-Exit:";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"\nEnter a&b:";
                    cin>>a>>b;
                    swapint(a,b);
                    cout<<"\nSwapped values: a="<<a<<",b="<<b;
                    break;
            case 2: cout<<"\nEnter m&n:";
                    cin>>m>>n;
                    swapchar(m,n);
                    cout<<"\nSwapped values: m="<<m<<",n="<<n;
                    break;
        }
    }
	return 0;
}
