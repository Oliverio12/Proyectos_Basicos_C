#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char N;
	cout<<"Ingrese un numero: ";
	cin>>N;
	switch(N)
	{
		case '1':
		cout<<"El dia es lunes";
		break;
		 case '2':
		cout<<"El dia es martes";
		break;
			case '3':
		cout<<"El dia es miercoles";
		break;
			case '4':
		cout<<"El dia es jueves";
		break;
			case '5':
		cout<<"El dia es viernes";
		break;
			case '6':
		cout<<"El dia es sabado";
		break;
			case '7':
		cout<<"El dia es domingo";
	    break;
	    
		default:
		cout<<"Error";
	}	
	return 0;
}
