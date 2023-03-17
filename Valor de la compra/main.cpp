#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	float DC,VC,ED;
	cout<<endl<<"INGRESE EL VALOR DE LA COMPRA: ";
	cin>>VC;
	cout<<endl<<"INGRESE EFECTIVO DADO: ";
	cin>>ED;
	DC=ED-VC;
	cout<<endl<<"el cambio a dar es: "<<DC<<endl;
	
	
	return 0;
}
