#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float HL,P,TH;
	cout<<endl<<"Ingrese las horas laboradas: ";
	cin>>HL;
	cout<<"Ingrese la tarifa por hora: ";
	cin>>TH;
	P=(HL*TH);
	cout<<endl<<"El pago por las horas laboradas es: "<<P;
	
	
	return 0;
}
