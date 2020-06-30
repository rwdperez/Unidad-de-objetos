#include <iostream>
#include <iostream>
#include <windows.h>

using namespace std;

class personaje{
	
	string nombrePj;
	int armadura;
	int vida;
	
public:
	
	personaje(string nombre);
	void miNombreEs();
	void getVida();
	void danio(int danioRecibido);
	
	
	
	
};

personaje::personaje(string nombre){
	
	personaje::armadura = 100;
	personaje::vida = 100;
	personaje::nombrePj=nombre;
}

void personaje::miNombreEs(){
	
	cout<<" mi nombre es "<<nombrePj;
}

void personaje::danio(int danioRecibido){
	
	personaje::armadura = armadura-danioRecibido;
	if(armadura <= 0){
		
		personaje::vida = -danioRecibido;
	}
}

void personaje::getVida(){
	
	cout<<" armadura "<<armadura<<" Vida "<<vida<<endl;
	
}



int main(int argc, char *argv[]) {
	
	
	personaje p1("aldebaran");
	p1.miNombreEs();
	cout<<endl;
	p1.danio(10);
	
	p1.getVida();
	
	
	
	
	return 0;
}

