#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int N1,N2,N3;
	cout<<"Digite los numeros"<<endl;
	cout<<endl<<"Ingrese el primer  numero: ";
	cin>>N1;
	cout<<endl<<"Ingrese el segundo numero: ";
	cin>>N2;
	cout<<endl<<"Ingrese el tercer numero: ";
	cin>>N3;
	if (N1>N2 and N1>N3)
	{
		cout<<endl<<"Numero mayor es: "<<N1<<endl;
	}
	else
	{
		if(N2>N1 and N2>N3)
		{
			cout<<endl<<"Numero mayor es: "<<N2<<endl;
		}
		else
		{
			if(N3>N1 and N3>N2)
			{
				cout<<endl<<"Numero mayor es: "<<N3<<endl;
			}
			else
			{
				cout<<endl<<"Los numeros son iguales. "<<endl;
			}
			
		}
	
	}
    return 0;
}
