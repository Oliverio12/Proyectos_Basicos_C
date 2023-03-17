#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	float PA,D,PD,PF,I; 
	
	cout<<"Ingrese precio del articulo: ";
	cin>>PA;
	D=PA*0.2;
	PD=PA-D;
	I=PD*0.13;
	PF=PD+I;
	cout<<endl<<"El precio de la compra es: "<<PF<<endl;
	
	
	return 0;
}
