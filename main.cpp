#include "ArregloDinamico.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	ArregloDinamico arreglo;
	string aux;
	
	
	for(size_t x = 0; x < 8; x++){
		cout << "Escriba una cadena de caracteres (insertarFinal) (" << x+1 << "/8): ";
		getline(cin, aux);
		arreglo.insertarFinal(aux);
	}
	
	cout << endl;
	
	for(size_t x = 0; x < arreglo.size(); x++){
		cout << arreglo[x] << " | ";
	}
	
	cout << endl <<endl;
	
	for(size_t x = 0; x < 2; x++){
		cout << "Escriba una cadena de caracteres (insertarInicio)(" << x+1 << "/2): ";
		getline(cin, aux);
		arreglo.insertarInicio(aux);
	}
	
	cout << endl << endl;
	
	for(size_t x = 0; x < arreglo.size(); x++){
		cout << arreglo[x] << " | ";
	}
	
	return 0;
}
