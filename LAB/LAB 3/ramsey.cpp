#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int array[10][10];
int friends(int array[10][10]){
    int count=0;
    for (int i = 0; i < 10; ++i)
        for (int j = i+1; j < 10; ++j)
        if(array[i][j]==1)
            for (int k = j+1; k < 10; ++k)
            if(array[i][k]==1 && array[j][k]==1)
                count++;
    return count;
}

int enemies(int array[10][10]){
    int count=0;
    for (int i = 0; i < 10; ++i)
        for (int j = i+1; j < 10; ++j)
        if (array[i][j]==0)
            for (int k = j+1; k < 10; ++k)
            if (array[i][k]==0 && array[j][k]==0)
           		count++;
    return count;
}

int main()
{
    for(int i=0;i<10;++i)
        for (int j=0;j<10;++j){
            if (i==j) 
                array[i][j]=1;
            else
                array[j][i]=array[i][j]=rand()%2;
        }
    for(int k=0;k<10;++k){
        for(int i=0;i<10;++i){
            cout<<array[k][i]<<"\t";
        }
        cout<<endl;
    }
    int a=friends(array);
    int b=enemies(array);
    if(a>=3)
        cout<<"3 mutual friends"<<endl;
    if(b>=3)
        cout<<"3 mutual enemies"<<endl;
    return 0;
}