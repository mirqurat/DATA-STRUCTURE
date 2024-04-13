#include<iostream>
using namespace std;
int main(){
	int arr[10]={9,6,5,4,3,5,7,8,9,0},pos,i;
	cout<<"array elements :";
	for(i=0;i<10;i++)
	{
	cout<<arr[i];
}
	cout<<"\nenter position";
	cin>>pos;
	for(i=pos;i<10;i++){
		arr[i]=arr[i+1];	
	}
	for(i=0;i<9;i++){
		cout<<arr[i];
	}
	return 0;
}
