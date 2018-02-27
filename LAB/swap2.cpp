#include<stdio.h>
#include<iostream>
using namespace std;
void swapint(int &a, int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
void swapfloat(float &a, float &b)
{
	float c;
	c=a;
	a=b;
	b=c;
}
void swapchar(char &a, char &b)
{
	char c;
	c=a;
	a=b;
	b=c;
}
int main()
{
	int a,b,ch;
	float p,q;
	char m,n;
	while(ch!=4)
    {
        cout<<"\nEnter to swap \n1-int\t2-float\t3-char\t4-Exit:";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"\nEnter a&b:";
                    cin>>a>>b;
                    swapint(a,b);
                    cout<<"\nSwapped values: a="<<a<<",b="<<b;
                    break;
            case 2: cout<<"\nEnter p&q:";
                    cin>>p>>q;
                    swapfloat(p,q);
                    cout<<"\nSwapped values: p="<<p<<",q="<<q;
                    break;
            case 3: cout<<"\nEnter m&n:";
                    cin>>m>>n;
                    swapchar(m,n);
                    cout<<"\nSwapped values: m="<<m<<",n="<<n;
                    break;
        }
    }
	return 0;
}
