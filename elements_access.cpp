#include<iostream>

using namespace std;

int main(){

	int arr[5];
	int i,j;

	cout<<"Enter Elements ";
	for(j=0;j<5;j++){
		cin>>arr[j];
	}
	cout<<"\n you  entered \n ";
	for( i=0;i<j;i++){
		cout<<endl<<*(arr+i);
	}
	return 0;
}
