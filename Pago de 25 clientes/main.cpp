#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
float C,PR,PA,Z;
for (Z=1;Z<=25;Z++)
{
	cout<<"INGRESE CUANTOS PRODUCTOS LLEVAN : "<<endl;
	cin>>C;
	cout<<"INGRESE EL PRECIO DEL PRODUCTO: "<<endl;
	cin>>PR;
	PA=C*PR;
    cout<<" EL PAGO A REALIZAR ES : "<<PA<< " DOLARES"<<endl;	
}




	return 0;
}
