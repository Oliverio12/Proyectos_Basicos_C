#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int N=0,E=0,C=0,P=0,SN=0;
	for(C=1;C<=100;C++)
	{
		cin>>N;
		SN=SN+N;
		
	}
	P=SN/100;
	cout<<"Promedio: "<<P<<endl;
	return 0;
}
