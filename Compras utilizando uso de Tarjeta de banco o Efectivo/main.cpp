#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int CM, TaM;
	string TiM,FP;
	float Pr,IT,ITar,PF,PT;
	
	cout<<"Ingrese la cantidad de manzanas: ";
	cin>>CM;
	cout<<"Ingrese el tipo de manzana: ";
	cin>>TiM;
	cout<<"Ingrese el tamayo de las manzana: ";
	cin>>TaM;
	cout<<"Ingrese la forma de pago: ";
	cin>>FP;
	
	if(TiM=="ROJA")
	{
		Pr=1;
	}
	else
	{
		if(TiM=="VERDE")
		{
			Pr=1.5;
		}
		else
		{
			cout<<"TIPO DE MANAZANAS INVALIDOS, INGRESE, INGRESE DE NUEVO AL SISTEMA: ";
			return 0;
		}
	}
	if (TaM==1)
	{
		IT=Pr*0.05;
	}
	else
	{
		IT=0;
	}
	Pr=Pr+IT;
	PT=Pr*CM;
	
	if(FP=="TARJETA")
	{
		ITar=0.1*PT;
	}
	else
	{
		if(FP=="EFECTIVO")
		{
			ITar=0;
		}
		else
		{
			cout<<"FORMA DE PAGO INVALIDA, INGRESE DE NUEVO AL SISTEMA.";
			return 0;
		}
	}
	PF=PT+ITar;
	
	cout<<"EL PAGO FINAL ES: "<<PF<<endl;
	return 0;
}
