#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	float AA,AN,E;
	cout<<"Ingrese el anyo actual: ";
	cin>>AA;
	cout<<"Ingrese anyo de nacimiento: ";
	cin>>AN;
	E=AA-AN;
	cout<<endl<<"La edad de la persona es: "<<E;
	
	return 0;
}
