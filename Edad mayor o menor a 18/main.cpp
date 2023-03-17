#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int ED;
	cout<<"Ingrese edad: ";
	cin>>ED;
	if (ED>=18)
	{
		cout<<endl<<"MAYOR DE EDAD ";
	}
	else
	{
		cout<<endl<<"MENOR DE EDAD";
	}
	return 0;
}
