#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float C,TD,T;
	cout<<endl<<"Escribir tiempo de llamada: ";
	cin>>TD;
	cout<<endl<<"Escribir la tarifa por llamada: ";
	cin>>T;
	C=TD*T;
	cout<<endl<<"El costo de la llamada es: "<<C;
	
	
	
	return 0;
}
