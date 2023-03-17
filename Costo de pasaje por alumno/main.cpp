#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float CP,CT,CA;
	cout<<"Ingrese la cantidad de alumnos: ";
	cin>>CA;
	if(CA>=300)
	{
		CP=3.00;
	}
	else
	{
	  if(CA>=200 and CA<=199)
	  {
	  	CP=5.00;
	  }	
	  else
	  {
	  	if(CA>=100 and CA<=199)
		  {
		  	  	CP=8.00;
			  	
		  }
		  else 
		  {
		  	CP=10.00;
		  }
	  }
	}
	CT=CP*CA;
	cout<<"El costo del pasaje es: "<<CT;
	return 0;
}
