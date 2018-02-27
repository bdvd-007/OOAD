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
	displaymax(root);
	return 0;
}
