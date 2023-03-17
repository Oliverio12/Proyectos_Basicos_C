#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int C,N,NP=0,NN=0;
	for (C=1;C<=5;C++)
	{
		cin>>N;
			if (N>=0)
	{
		NP++;
	}
	else
	{
		NN++;
	}
	
	}
	cout<<"Mostrar cantidad de numeros Positivos: "<<NP<<endl;
	cout<<"Mostrar cantidad de numeros Negativo: "<<NN<<endl;
	
	return 0;
}
