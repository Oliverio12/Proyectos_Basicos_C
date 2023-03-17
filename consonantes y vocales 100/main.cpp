#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int C=0,K,V=0;
	char L;
	for (K=1;K<=10;K++)
	{
		cin>>L;
		switch (L)
		{
			case 'A':
			   V++;
			  break;
			case 'E':
				V++;
			   break;
			case 'I':
			   V++;
			   break;
			case 'O':
			   V++;
			   break;
			case 'U':
			   V++;
			   break;
			  default:
			   C++; 	
		}
	}
	cout<<"CANTIDAD DE VOCALES INGRESADA: "<<V<<endl;
	cout<<"CANTIDAD DE CONSONANTES INGRESADAS: "<<C<<endl;
	return 0;
}
