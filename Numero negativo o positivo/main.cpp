-#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float N;
	cout<<"Ingrese un numero: ";
	cin>>N;
	if(N>=0)
	{
		cout<<endl<<"Positivo: "<<endl<<N;
	}
	else
	{
		cout<<endl<<"Negativo: "<<endl<<N;
	}
	return 0;
}
