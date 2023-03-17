#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	float Nf;
	cout<<"Escribir nota final del alumno: ";
	cin>>Nf;
	if(Nf>=7)
	{
	cout<<endl<<"El alumno esta aprobado. :D";	
	}
	else
	{
		cout<<endl<<"El alumno esta reprobado. :(";
	}

	
	
	
	return 0;
}
