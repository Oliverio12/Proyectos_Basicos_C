#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	char Tipo;
	cout<<"Digite el tipo de tarjeta: ";
	cin>>Tipo;
	switch(Tipo)
	{
		case 'A': 
		cout<<"Porcentaje de credito es: 25% "; 
		break;
		case 'B': 
		cout<<"Porcentaje de credito es: 10% "; 
		break;
		case 'C': 
		cout<<"Porcentaje del credito es: 5% "; 
		break;
		default: 
		cout<<"No se le aumenta el credito";
	}	
	return 0;
}
