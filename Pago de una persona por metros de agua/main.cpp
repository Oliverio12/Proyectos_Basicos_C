#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	float P,MA,T;
	cout<<endl<<"Ingrese los mentros de agua: ";
	cin>>MA;
	cout<<endl<<"Ingrese la tarifa: ";
	cin>>T;
	P=(T*MA);
	cout<<endl<<"La tarifa por consumo de agua es: "<<P<<endl;
	return 0;
}
