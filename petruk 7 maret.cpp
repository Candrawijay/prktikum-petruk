#include <iostream>
using namespace std;
int main(){
//	char name [20];
//	cout<<"masukkan nama : ";
//	cin>>name;
//	cout<<name;
//
//
//	int arr[5]={10,20,30,40,50};
//	for(int i =0; i<5; i++){
//		cout<<"the value "<<i<<" is "<<arr[i]<<endl;
//	}
//
//
//	int arr[5]={66,67,36,95,21};
//	for (int a=0;a<5;a++){
//		cout<<"urutan "<<a<<" adalah "<<arr[a]<<endl;
//	}
//	cout<<sizeof(arr)<<endl;
//	cout<<sizeof(arr)/sizeof(*arr);
//
//
// 	cout<<sizeof;
//
//
//	char jurs[]={"ilkom unila"};
//	char jur[]={'a','b','c','\0'}; //null char '\0' after 'c'
//	cout<<jurs<<endl;
//	cout<<jur[1]<<endl;
//	
//	string fak[]={"fmipa","fp","fk"};
//	cout<<fak[1];
//
//
	int arr[3][4];
	for (int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			arr[i][j]=i*j;
		}
	}
	for (int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
