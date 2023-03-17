#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float r,A;
	cout<<"Ingrese el radio el circulo: ";
	cin>>r;
	if(r>0)
	{
		A=3.1416*pow(r,2);
		cout<<A;
	}

	
	
	
	
	
	return 0;
}
