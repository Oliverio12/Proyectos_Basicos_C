#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
float A,P,N1,N2,N3,N4;
for(A=1;A<=10;A++)
{
	cout<<"INGRESE LA PRIMERA NOTA: "<<endl;
	cin>>N1;
	cout<<"INGRESE LA SEGUNDA NOTA: "<<endl;
	cin>>N2;
	cout<<"INGRESE LA TERCER NOTA :"<<endl;
	cin>>N3;
	cout<<"INGRESE LA CUARTA NOTA :"<<endl;
	cin>>N4;
	P=N1+N2+N3+N4/4;
	cout<<" EL PROMEDIO DEL ESTUDIANTE ES : "<<P<<endl;
		
}


	return 0;
}
