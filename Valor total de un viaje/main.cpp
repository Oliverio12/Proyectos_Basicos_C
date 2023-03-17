#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int E,V;
	float T,EH,C;
	cout<<"Transporte"<<endl;
	cin>>T;
	cout<<"Comida"<<endl;
	cin>>C;
	cout<<"Estancia en el hotel"<<endl;
	cin>>EH;
	V=(EH+C+T);
	cout<<"viaje";
	cout<<V;
	return 0;
}
