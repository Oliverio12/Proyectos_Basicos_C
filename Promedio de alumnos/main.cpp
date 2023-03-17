#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float P,S,T,PR;
	cout<<endl<<"Ingrese nota del primer examen: ";
	cin>>P;
	cout<<endl<<"Ingrese nota del segundo examen: ";
	cin>>S;
	cout<<endl<<"Ingrese nota del tercer examen: ";
	cin>>T;
	PR=(P*0.25)+(S*0.25)+(T*0.50);
	cout<<endl<<"El promedio del alumno es: "<<PR;

	
	
	
	return 0;
}
