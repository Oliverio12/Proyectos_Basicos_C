#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int OPC;
	char OPE;
	float N1,N2,N3,PROM,R;
	string RP="SI";
	while(RP=="SI")
	{
		cout<<"MENU: "<<endl;
		cout<<"1 PROMEDIO. "<<endl;
		cout<<"2 CALCULAR. "<<endl;
		cin>>OPC;
		switch(OPC)
		{
			case 1:
				cout<<"INGRESE 3 CALIFICACIONES"<<endl;
				cout<<"NOTA 1: "; cin>>N1;
				cout<<"NOTA 2: "; cin>>N2;
				cout<<"NOTA 3: "; cin>>N3;
				PROM=(N1+N2+N3)/3;
				cout<<"EL PROMEDIO ES: "<<PROM<<endl;
				break;
			case 2:
			cout<<"INGRESAR LA OPERACION (+,-,*,/): "; cin>>OPE;
			cout<<"INGRESE N1: "; cin>>N1;
			cout<<"INGRESE N2: "; cin>>N2;
			switch(OPE)
			{
				case '+':
					R=N1+N2;
					break;
				case '-':
				    R=N1-N2;
				    break;
				case '*':
				    R=N1*N2;
					break;
				case '/':
				    R=N1/N2;
				    break;
				default:
				    R=0;
				    cout<<"ERROR"<<endl;
			}
			cout<<"EL RESULTADO DE LA OPERACION ES: "<<R<<endl;
			break;
		default:
		    cout<<"OPCION NO DISPONIBLE, INGRESE DE NUEVO AL SISTEMA."<<endl;
				return 0;	
		}
		cout<<"DESEA INGRESAR DE NUEVO AL SISTEMA? (SI/NO) ";
		cin>>RP;
	}
	return 0;
}
