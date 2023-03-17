#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float A,B,C,V;
	cout<<"Ingrese las dimensiones"<<endl;
	cout<<"A: ";
	cin>>A;
	cout<<"B: ";
	cin>>B;
	cout<<"C: ";
	cin>>C;
	V=A*B*C;
	cout<<endl<<"El resultado del volumen es: "<<V<<endl;
	
	
	return 0;
}
