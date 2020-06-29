#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class jugador {
	
	string nombre;
	
public:
	
	jugador(string nombreJugador);
	mostrar();

};
	
	jugador::mostrar(){
		
		cout<<jugador::nombre;
		
	}

	jugador::jugador(string nombreJugador){
	
	jugador::nombre = nombreJugador;
	
}

int main(int argc, char *argv[]) {
	


	jugador jug1("hola");
	
	


	
	
	
	return 0;
}

