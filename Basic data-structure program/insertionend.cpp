//insertion at the end of array
#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,x,i;
	cout<<"enter size of an arrray";
	cin>>n;
	cout<<"enter array elements";
	for(i=0;i<n;i++)
	{
	  cin>>arr[i];
	}
	cout<<"enter element to insert at the end";
	cin>>x;
	arr[i]=x;
	n++;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
