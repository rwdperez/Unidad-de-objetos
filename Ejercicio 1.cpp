#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class jugador {
	
	string nombre;
	
public:
	
	jugador(string nombreJugador);
	void  mostrar();
	void setNombre(string cambiarNombre);

};
	
	void jugador::mostrar(){
		
		cout<<"Mi nombre es "<<nombre;
		
		
	}

	jugador::jugador(string nombreJugador){
	
	jugador::nombre = nombreJugador;
	
}
	void jugador::setNombre(string cambiarNombre){
		
		jugador::nombre = cambiarNombre;
	}

int main(int argc, char *argv[]) {
	


	jugador jug1("walter");
	
	jug1.mostrar();
	
	jug1.setNombre("tito waltito ");
	
	jug1.mostrar();
	
	


	
	
	
	return 0;
}

