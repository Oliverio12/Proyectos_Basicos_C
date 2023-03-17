#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float Pcl,Cl;
	cout<<"Ingrese la cantidad de lapices: ";
	cin>>Cl;
	if(Cl>=1000)
	{
	
	Pcl=0.05*Cl;
	}
		else
		{
			Pcl=0.10*Cl;
		}
		
	 
	cout<<endl<<"El pago por la canitdad de lapices es: "<<Pcl;
	
	
	return 0;
}
