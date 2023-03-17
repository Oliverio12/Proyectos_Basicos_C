#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char TH,FP;
	int CH,CE;
	float R,P,ST,T;
	cout<<endl<<"*******************************************************"<<endl;
	cout<<endl<<"*******************BIENVENIDOS*************************"<<endl;
	cout<<endl<<"*******************************************************"<<endl;
	cout<<endl<<"Te ofresemos las siguientes hamburguesas: "<<endl;
	cout<<endl<<"S=SENCILLA / D=DOBLE / T=TRIPLE"<<endl;
	cout<<endl<<"Ingrese el tipo de hamburguesa: "<<endl;
	cin>>TH;
	while(TH!='S' and TH!='D' and TH!='T')
	{
		cout<<"INGRESE DE NUEVO EL TIPO DE HAMBURGUESA: ";
		cin>>TH;
		CE++;
		if(CE>1)
		{
			cout<<"JAJAJA FRACASASTE!"<<endl;
			return 0;
		}
	}
	cout<<"INGRESE LA CANTIDAD DE HAMBURGUESA: "<<endl;
	cin>>CH;
	cout<<"T=TARJETA / E=EFECTIVO"<<endl;
	cout<<"INGRESE EL TIPO DE PAGO: "<<endl;
	cin>>FP;
	while(FP!='T' and FP!='E')
	{
		cout<<"Ingrese de nuevo el tipo de pago: ";
		cin>>FP;
	}
	switch(TH)
	{
		case 'S':
			P=5;
			break;
		case 'D':
		    P=10;
			break;
		case 'T':
			P=15;
			break;	
	}
	ST=P*CH;
	if(FP=='T')
	{
		R=ST*0.05;
	}
	else
	{
		R=0;
	}
	T=ST+R;
	cout<<endl<<"SU TOTAL ES: $"<<T<<endl;
	cout<<"GRACIAS POR SU COMPRA"<<endl;
	
	return 0;
}
