#include <iostream>
#include <stdlib.h>
using namespace std;

//Defining Class
class CountGen
{
	public:
		void permute(int sum,int LIM,int len);
		CountGen(int len);
		void ARRAYSTATUS(int arr[],int length);
	private:
		long unsigned length;
};


CountGen::CountGen(int len)
{
	length=len;
	permute(length,2,0);
}

void CountGen::ARRAYSTATUS(int arr[], int arr_len)
{
  for (int i = 0; i < arr_len; i++)
  cout<<arr[i]<<" ";
  cout<<endl;
}

//Permute Function
void CountGen::permute(int sum,int LIM,int len)
{
	static int arr[100];
	if(!sum)
	 ARRAYSTATUS(arr,len);
	else
	if(sum>0)
	for(int i=1;i<=LIM;i++)
	{
		arr[len]=i;
		permute(sum-i,LIM,len+1);
	}
}

int main(void){
	int length;
	cout<<"Enter number of steps on ladder\n";
	cin>>length;
	CountGen monkey(length);
	return 0;
}