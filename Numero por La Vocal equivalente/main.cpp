#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char N;
	cout<<"Escriba un numero: ";
	cin>>N;
	switch(N)
	{
		case '1':
		cout<<"La vocal es equivalente al numero es: A";
		break;
		case '2':
		cout<<"La vocal equivalente al numero es: E";
		break;
		case '3':
		cout<<"La vocal equivalente al numero es: I";
		break;
		case '4':
		cout<<"La vocal equivalente al numero es: O";
		break;
		case '5':
		cout<<"La vocal equivalente al numero es: U";
		break;
		default:
		cout<<"El numero no equivale a una voacal.";	
	}
	return 0;
} 
