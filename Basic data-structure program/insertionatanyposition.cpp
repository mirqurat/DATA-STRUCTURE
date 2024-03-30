//insertion at any particular position
#include<iostream>
using namespace std;
int main()
{
	int arr[10],pos,x,n,i;
	cout<<"enter sixe of array";
	cin>>n;
	cout<<"enter elements of arrray";
	for(i=0;i<n;i++){
		cin>>arr[i];	
	}
	cout<<"enter location of inserting element";
	cin>>pos;
	cout<<"enter the value to insert";
	cin>>x;																		
	for(i=n-1;i>=pos-1;i--) 
	{
		arr[i+1]=arr[i];
	}
	arr[pos-1]=x;
	n++;
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
