#include <iostream>
#include <ctime> //Se utiliza para usar las funciones que crean números aleatorios
using namespace std;

int main(){
	int numeros[100];
	srand(time ( 0 ) );
	
	for(int i = 0; i < 100; i++){
	 numeros[i]=rand() % 100; //Se le asignan números del 0 al 99
    } 
	for(int i = 0; <100; i++){
	count << numeros [i] << endl;
	}
	return 0;
}
