#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"\n ingrese un color"<<endl<<endl;
	string C;
	cin>>C;
	
	while(C!="rosado")
	{
		cout<<"Ingrese otro color"<<endl;
		cin>>C;
	}
	cout<<"El proceso finalizo"<<endl;
	return 0;
}
