#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv)
 {
 	float P;
 	int Z,Pp;
 	cout<<"America del norte: 1"<<endl;
 	cout<<"America central: 2"<<endl;
 	cout<<"America del sur: 3"<<endl;
 	cout<<"Europa: 4"<<endl;
 	cout<<"Asia: 5"<<endl;
 	cout<<endl<<"Ingrese la zona: ";
 	cin>>Z;
 	cout<<"Ingrese el peso del paquete: ";
 	cin>>Pp;
 	switch (Z)
 	{
 		case 1:
 			P=Pp*16;
 			cout<<"EL precio del paquete es: "<<P;
 			break;
 		case 2:
 			P=Pp*10;
 			cout<<"EL precio del paquete es: "<<P;
 			break;
 		case 3:
 			P=Pp*12;
 			cout<<"EL precio del paquete es: "<<P;
 			break;
 		case 4:
 			P=Pp*24;
 			cout<<"EL precio del paquete es: "<<P;
 			break;
 		case 5:
 			P=Pp*27;
 			cout<<"EL precio del paquete es: "<<P;
 			break;
 		default:
 			cout<<"Esa zona no existe en el sistema. ";
	 }
	return 0;
}
