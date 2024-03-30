//diagonal or not
#include<iostream>
using namespace std;
int main(){
	int arr[3][3]={ {1,0,0},
					{9,5,0},
					{0,0,9}};
	int i,j,flag =0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<arr[i][j];
		}
		cout<<endl;		
	}
			
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(arr[i][j] != arr[j][i])
			flag=1;
			break;
		}
			}
			if(flag==0){
				cout<<"diagonal";
			}
			else{
				cout<<"not diagonal";
			}
}
