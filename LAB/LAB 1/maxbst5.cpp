/* Insert elements of array into a Binary Search Tree, and then give the rightmost element as max*/ 
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
    int a;
    node *l,*r;
};
 node *root=NULL, *cr, *t;
 
void search(int m)
{
    cr=root;
    int k=0;
    while(cr!=NULL)
    {
        if(cr->a>m)
            cr=cr->l;
        else if(cr->a<m)
            cr=cr->r;
       else if(cr->a==m)
            {k++; break;}
    }
    if(k==0)
        cout<<"\nElement NOT found!!";
    else
        cout<<"\nElement found!!";
}

void insert(int a)
{
    t=new node;
    t->a=a;
    t->l=NULL;
    t->r=NULL;
    if(root==NULL)
        root=t;
    else
    {
        cr=root;
        while(1)
        {
            if(t->a<cr->a)
            {
                if(cr->l==NULL)
                {
                    cr->l=t;
                     break;
                }
            cr=cr->l;
            }
            else if(t->a>cr->a)
            {
                if(cr->r==NULL)
                {
                    cr->r=t;
                     break;
                }
            cr=cr->r;
            }
        }
    }
}
void displaymax(struct node*r)
{
    while(r->r!=NULL)
    {
        r=r->r;
    }
    cout<<"\nMAX:"<<r->a;

}
int main()
{
    int b[10],i;
    cout<<"Array:\n";
    for(i=0;i<10;i++)
    {
        b[i]=rand()%100;
        cout<<b[i]<<" ";
    }
    for(i=0;i<10;i++)
    {
        insert(b[i]);
    }
	cout<<"\n";
	cout<<"\nElement to be searched:";
	cin>>ele;
	search(ele);
	return 0;
}
