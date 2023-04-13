#include <iostream>
#include <cstring>
using namespace std;
int main(){
//	char nama[15]="can";
//	char prodi[]="ilkom";
//	cout<<nama<<endl;
//	cout<<sizeof(nama)<<endl;
//	cout<<prodi<<endl;
//	cout<<sizeof(prodi)<<endl;
//	for (int i=0;i<sizeof(prodi);i++)
//		cout<<prodi[i]<<" "<<(prodi[i]=='\0'?"Null":"Not Null")<<endl;
//	
//	char na[15];
//	char npm[12];
//	cin.get(na, 15);
//	cin.ignore();
//	cin.get(npm, 12);
//	cout<<na<<endl;
//	cout<<npm<<endl;
//
//	char karakter;
//	while(cin.get(karakter)){
//		if (karakter == 'a')
//			cin.putback('x');
//		else
//			cout<<karakter;
//	}
//	
//	char str[]={'i','l','k','o','m','p','\0'};
//	cout<<str<<endl;
//	cout<<strlen(str)<<endl;
//	cout<<sizeof(str)<<endl;
//	
//	char fnm[50]="chandra wijaya ";
//	char lnm[50]="pramono putra";
//	char *flnm=strcat(fnm,lnm);
//	cout<<flnm;
//
//	char* endptr;
//	char str1[]="00011010jhon";
//	unsigned long value1 = strtoul(str1, &endptr, 2);
//	cout<<value1<<endl;
//	cout<<endptr<<endl;
//	char str2[]="1czidan";
//	unsigned long value2=strtoul(str2, &endptr, 16);
//	cout<<value2<<endl;
//	cout<<endptr<<endl;
//	char str3[]="40raziq";
//	unsigned long value3=strtoul(str3, &endptr, 10);
//	cout<<value3<<endl;
//	cout<<endptr<<endl;
//
//	char* endptr;
//	char str1[]="00011010jhon";
//	long value1 = strtol(str1, &endptr, 2);
//	cout<<value1<<endl;
//	cout<<endptr<<endl;
//	char str2[]="1czidan";
//	long value2=strtol(str2, &endptr, 16);
//	cout<<value2<<endl;
//	cout<<endptr<<endl;
//	char str3[]="40raziq";
//	long value3=strtol(str3, &endptr, 10);
//	cout<<value3<<endl;
//	cout<<endptr<<endl;
//
//	char* endptr;
//	char str1[]="00011010jhon";
//	double value1 = strtod(str1, &endptr, 2);
//	cout<<value1<<endl;
//	cout<<endptr<<endl;
//	char str2[]="1czidan";
//	double value2=strtod(str2, &endptr, 16);
//	cout<<value2<<endl;
//	cout<<endptr<<endl;
//	char str3[]="40raziq";
//	double value3=strtod(str3, &endptr, 10);
//	cout<<value3<<endl;
//	cout<<endptr<<endl;

	char data[5][100]={"2217051020 candra wijaya p",
						"2217051013abrakadabra pangestu",
						"2217051157riziq alhikam",
						"2218073456yanto wilken a",
						"2257100522jafir mudasir k"};
	char* endptr;
	for(int i=0;i<5;i++){
		long value=strtod(data[i],&endptr);
		cout<<endptr<<endl;
		cout<<value<<endl;
		cout<<endl;
	}
}
