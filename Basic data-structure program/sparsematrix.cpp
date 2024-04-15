#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{0,0,9},{0,0,8},{7,0,0}};
	int i,j,count=0;
	int row=3,col=3;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(arr[i][j]==0)
			count ++;
		}
	}
	cout<<"the matrix is :"<<endl;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"the number of zero in the matrix are"<<count<<endl;
	if(count>((row * col)/2)){
	
	cout<<"this is a sparse matrix"<<endl;
}
	else{
		cout<<"this is not a sparse matrix"<<endl;
	}
		return 0;
		
	}

