#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float CA,CB,h;
	cout<<"Escribir cateto A: ";
	cin>>CA;
	cout<<endl<<"Escribir catteo B: ";
	cin>>CB;
	h=sqrt((CA*CA)+(CB*CB));
	cout<<endl<<"La hipotenusa del rectangulo es: "<<h<<endl;
	
	
	return 0;
}
