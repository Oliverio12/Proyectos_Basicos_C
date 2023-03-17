#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    float Z,HTE,P;	
	for (Z=1;Z<=100;Z++)
	{
		cout<<" INGRESAR HORAS LABORADAS : ";
	cin>>HTE;
	P=HTE*5;
	cout<<endl<<"Mostrar pago: "<<P<<endl;	
	}
	return 0;
}
