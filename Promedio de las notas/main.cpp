#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float N1,N2,N3,N4,PF;
	cout<<endl<<"Ingrese la primera nota: ";
	cin>>N1;
	cout<<endl<<"Ingrese la segunda nota: ";
	cin>>N2;
	cout<<endl<<"Ingrese la tercera nota: ";
	cin>>N3;
	cout<<endl<<"Ingrese la cuarta notas: ";
	cin>>N4;
	PF=(N1+N2+N3+N4)/4;
	cout<<endl<<"El promedio final es: "<<PF;
	
	
	return 0;
}
