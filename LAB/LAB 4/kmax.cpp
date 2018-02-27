#include<iostream>
#include<stdlib.h>
using namespace std;
int l,n;
int partition(int a[],int beg,int end)
{
 int i,j,x,temp;
 l=end;
 x=a[end];
 i=beg-1;
 for(j=beg;j<end;j++)
 {
  if(a[j]<=x)
  {
   i++;
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
 }
  temp=a[end];
  a[end]=a[i+1];
  a[i+1]=temp;
  return i+1;

}
void kmin(int a[], int m, int k)
{
    int c;
        do
    {
     c=partition(a,1,m);
     if(l==c)
     m--;
  } while(c!=k);
}

void kmax(int a[], int m, int k)
{
    int c;
        do
    {
     c=partition(a,1,m);
     if(l==c)
     m--;
  } while(c!=n-k);
}

int main()
{
 int a[100],ch,k,i,j,c,m;
 cout<<"\nEnter size:";
 cin>>n;
 cout<<"\n";
 for(i=1;i<=n;i++)
 {
  a[i]=rand()%100;
 }
 cout<<"\nEnter k:";
 cin>>k;
 cout<<"\n";
 cout<<"\nArray:";
  for(i=1;i<=n;i++)
 {
  cout<<a[i]<<" ";
 }
 m=n;
    do
    {
     cout<<"\nEnter\n1 for :k min\n2 for :k max\n3 for :Exit";
     cin>>ch;
     switch(ch)
     {
         case 1: kmin(a, m, k);
           cout<<"\nk Min elements:";
           for(i=1;i<=k;i++)
           cout<<a[i]<<" ";
                 break;
         case 2: kmax(a, m, k);
           for(i=n-k+1;i<=n;i++)
           cout<<a[i]<<" ";
                 break;
     }
     
 } while(ch!=3);

 return 0;
}