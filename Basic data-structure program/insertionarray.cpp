#include<iostream>
using namespace std;
int main()
{
	int array[1],n,i,x;
	cout<<"enter size of array \n";
	cin>>n;
	cout<<"enter arry elements \n";
	for(i=0;i<n;i++)
	{
		cin>>array[i];	
	}
	cout<<"enter element at bignning \n";
	cin>>x;
	for(i=n;i>0;i--){
		array[i]=array[i-1];
	}
	array[0]=x;
	n++;
	cout<<"array elements are \n :";
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<endl;
	}
	return 0;
}
