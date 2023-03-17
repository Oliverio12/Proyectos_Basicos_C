#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	float CB,CK,KR;
	cout<<endl<<"Ingrese costo por kilometro: ";
	cin>>CK;
	cout<<endl<<"Ingrese los kilometros por recorrer: ";
	cin>>KR;
	CB=(CK*KR);
	cout<<endl<<"El costo por boleto es: "<<CB;
	
	
	return 0;
}
