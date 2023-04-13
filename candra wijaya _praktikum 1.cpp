#include <iostream>
#include <cmath>
using namespace std;
//double luling(double r){
//	return M_PI*r*r;
//}
//
//int main(){
//	double x;
//	cin>>x;
//	cout<<"luas lingkarannya adalah : "<<luling(x);
//	return 0;
//}
//
void absen(string name, string npm){
	cout<<name<<"_"<<npm;
}

int main(){
	string name;
	string npm;
	getline(cin, name);
	cin>>npm;
	absen(name, npm);
	return 0;
}
