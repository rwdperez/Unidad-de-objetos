#include<iostream>
#include<cstdio>
#include "conio2.h"


using namespace std;

//Clase ficha, gestiona la informacion sobre la ficha que se usa.
class Ficha {
	
	private:
		
		char figura;
	public:
		
		Ficha();
		//Da valor a figura.
		Ficha(char);
		//Pinta el caracter elegido en la ficha.
		void setFigura(char);
		//Retorna el caracter de la ficha.
		char getFigura();
		
};
//Clase donde se realiza toda la jugada y se controlan los datos del tablero.
class Juego {
	
private:
	//Tablero donde se pintan las fichas.
	Ficha mapa[3][3];
	//Bool para saber si hay ganador o no.
	bool gano = false;
	
	
	
	
public:
	
	Juego();
	//Ubica la ficha en una posicion del mapa.
	void setMapa(int x, int y, char c);
	//Da un valor inicial a las coordenadas del mapa.
	void inicializarMapa();
	//Retorna el mapa.
	void mostrar();
	//Comprueba si ya se utilizo esa coordenada o no para mostrar el mensaje.
	void lugarDisponible();
	//Aplica condiciones para saber si hay ganador o no.
	void ganador();
	//Donde transcurre toda la jugada.
	void jugada();
	
	
	
	
};


Ficha::Ficha() {}

Ficha::Ficha(char c) {
	
	figura = c;
}

void Ficha::setFigura(char c) {
	
	figura = c;
}

char Ficha::getFigura() {
	
	return figura;
}



Juego::Juego(){}

void Juego::setMapa(int x, int y, char c){
	
	mapa[x][y] = c;
	
	

}

void Juego::inicializarMapa(){
	
	setMapa(0,0,'0');
	setMapa(0,1,'0');
	setMapa(0,2,'0');
	setMapa(1,0,'0');
	setMapa(1,1,'0');
	setMapa(1,2,'0');
	setMapa(2,0,'0');
	setMapa(2,1,'0');
	setMapa(2,2,'0');
	
}



void Juego::mostrar(){
	cout<<"    1  2  3"<<endl;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if ( i == 0 && j == 0){
				cout<<" A |";
			}
			if ( i == 1 && j == 0){
				cout<<" B |";
			}
			if (i == 2 && j == 0){
				cout<<" C |";
			}
			cout<<mapa[i][j].getFigura()<<" |";
		}
		cout<<endl;
	}
cout<<endl;
}

void Juego::lugarDisponible(){
	
	ganador();

		if (mapa[0][0].getFigura() == '0'){
			cout<<"Coordenadas A1 Presione 1 "<<endl;
		}
		if (mapa[0][1].getFigura() == '0'){
			cout<<"Coordenadas A2 Presione 2 "<<endl;
		}
		if (mapa[0][2].getFigura() == '0'){
			cout<<"Coordenadas A3 Presione 3 "<<endl;
		}
		if (mapa[1][0].getFigura() == '0'){
			cout<<"Coordenadas B1 Presione 4 "<<endl;
		}
		if (mapa[1][1].getFigura() == '0'){
			cout<<"Coordenadas B2 Presione 5 "<<endl;
		}
		if (mapa[1][2].getFigura() == '0'){
			cout<<"Coordenadas B3 Presione 6 "<<endl;
		}
		if (mapa[2][0].getFigura() == '0'){
			cout<<"Coordenadas C1 Presione 7 "<<endl;
		}
		if (mapa[2][1].getFigura() == '0'){
			cout<<"Coordenadas C2 Presione 8 "<<endl;
		}
		if (mapa[2][2].getFigura() == '0'){
			cout<<"Coordenadas C3 Presione 9 "<<endl;
		}
	cout<<"PARA SALIR PRESIONE ESCAPE"<<endl<<endl;

	
	

}
void Juego::ganador(){
	for (int i = 0; i < 3; i++){
		
		if(mapa[0][i].getFigura() == 'X' && mapa[1][i].getFigura() == 'X' && mapa[2][i].getFigura() == 'X'){
			cout<<" JUGADOR 1 GANA"<<endl;
			gano = true;
		}
		if(mapa[i][0].getFigura() == 'X' && mapa[i][1].getFigura() == 'X' && mapa[i][2].getFigura() == 'X'){
			cout<<" JUGADOR 1 GANA"<<endl;
			gano = true;
		}

		
		if(mapa[0][i].getFigura() == 'O' && mapa[1][i].getFigura() == 'O' && mapa[2][i].getFigura() == 'O'){
			cout<<" JUGADOR 2 GANA"<<endl;
			gano = true;
		}
		if(mapa[i][0].getFigura() == 'O' && mapa[i][1].getFigura() == 'O' && mapa[i][2].getFigura() == 'O'){
			cout<<" JUGADOR 2 GANA"<<endl;
			gano = true;
		}
		
	}
	if(mapa[0][0].getFigura() == 'O' && mapa[1][1].getFigura() == 'O' && mapa[2][2].getFigura() == 'O'){
		cout<<" JUGADOR 2 GANA"<<endl;
		gano = true;
	}
	if(mapa[0][2].getFigura() == 'O' && mapa[1][1].getFigura() == 'O' && mapa[2][0].getFigura() == 'O'){
		cout<<" JUGADOR 2 GANA"<<endl;
		gano = true;
	}
	if(mapa[0][0].getFigura() == 'X' && mapa[1][1].getFigura() == 'X' && mapa[2][2].getFigura() == 'X'){
		cout<<" JUGADOR 1 GANA"<<endl;
		gano = true;
	}
	if(mapa[0][2].getFigura() == 'X' && mapa[1][1].getFigura() == 'X' && mapa[2][0].getFigura() == 'X'){
		cout<<" JUGADOR 1 GANA"<<endl;
		gano = true;
	}
}

void Juego::jugada(){

//Si no hay ganador se ejecuta el juego.
if (gano == false){
	//Doy valor 0 a todas las coordenadas del mapa.
	inicializarMapa();
	//Bandera de la jugada del jugador 1.
	bool j1 = true;
	//Bandera de la jugda del jugador 2.
	bool j2 = true;
	//Bandera del do while central donde transcurre todo el juego.
	bool jugada = true;
	
	cout<<"JUEGO TA-TE-TI PARA 2 JUGADORES"<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"JUGADOR 1 = X"<<endl;
	cout<<"JUGADOR 2 = O"<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	
	do{
		cout<<" JUGADOR 1"<<endl;
		//Muestro el mapa.
		mostrar();
		//Chequeo las coordenadas disponibles.
		lugarDisponible();
		
		//Solo si la coordenada es igual a 0 deja presionar la tecla.
		while (j1 == true){
			
			if (kbhit()){
				int tecla = getch();
				switch (tecla){
						
				case 49:if(mapa[0][0].getFigura() == '0'){
						 setMapa(0,0,'X');
						 j1 = false;
						 break;
						}
						else{
							j1 = true;
							break;
						}
						
				case 50:if(mapa[0][1].getFigura() == '0'){
						 setMapa(0,1,'X');
						 j1 = false;
						 break;
						}
						else{
						 j1 = true;
						 break;
						}
						
				case 51:if(mapa[0][2].getFigura() == '0'){
						 setMapa(0,2,'X');
						 j1 = false;
						 break;
						}
						else{
						 j1 = true;
						 break;
						}
						
				case 52:if(mapa[1][0].getFigura() == '0'){
						 setMapa(1,0,'X');
						 j1 = false;
						 break;
						}
						else{
						 j1 = true;
						 break;
						}
						
				case 53:if(mapa[1][1].getFigura() == '0'){
						 setMapa(1,1,'X');
						 j1 = false;
						 break;
						}
						else{
						 j1 = true;
						 break;
						}
						
				case 54:if(mapa[1][2].getFigura() == '0'){
						 setMapa(1,2,'X');
						 j1 = false;
						 break;
						}
						else{
						 j1 = true;
						 break;
						}
						
				case 55:if(mapa[2][0].getFigura() == '0'){
						 setMapa(2,0,'X');
						 j1 = false;
						 break;
						}
						else{
						 j1 = true;
						 break;
						}
						
				case 56:if(mapa[2][1].getFigura() == '0'){
						 setMapa(2,1,'X');
						 j1 = false;
						 break;
						}
						else{
						 j1 = true;
						 break;
						}
						
				case 57:if(mapa[2][2].getFigura() == '0'){
						 setMapa(2,2,'X');
						 j1 = false;
						 break;
						}
						else{
						 j1 = true;
						 break;
						}
				case 27: j1 = false;
						 j2 = false;
						 jugada = false;
						 break;
						
				default: cout<<"Elija otra coordenada"<<endl;
							
				}
				
			}
		}
		
		//Comienza la jugada del jugador 2.
		cout<<"JUGADOR 2"<<endl;
		//Muestro el mapa.
		mostrar();
		//Consulto coordenadas disponibles.
		lugarDisponible();
		//Solo si la coordenada es igual a 0 deja presionar la tecla.
		while (j2 == true){
			
			if (kbhit()){
				int tecla = getch();
				switch (tecla){
					
				case 49:if(mapa[0][0].getFigura() == '0'){
						 setMapa(0,0,'O');
						 j2 = false;
						 break;
						}
						else{
						 j2 = true;
						 break;
						}
						
				case 50:if(mapa[0][1].getFigura() == '0'){
						 setMapa(0,1,'O');
						 j2 = false;
						 break;
						}
						else{
						 j2 = true;
						 break;
						}
						
				case 51:if(mapa[0][2].getFigura() == '0'){
						 setMapa(0,2,'O');
						 j2 = false;
						 break;
						}
						else{
						 j2 = true;
						 break;
						}
						
				case 52:if(mapa[1][0].getFigura() == '0'){
						 setMapa(1,0,'O');
						 j2 = false;
						 break;
						}
						else{
						 j2 = true;
						 break;
						}
						
				case 53:if(mapa[1][1].getFigura() == '0'){
						 setMapa(1,1,'O');
						 j2 = false;
						 break;
						}
						else{
						 j2 = true;
						 break;
						}
						
				case 54:if(mapa[1][2].getFigura() == '0'){
						 setMapa(1,2,'O');
						 j2 = false;
						 break;
						}
						else{
						 j2 = true;
						 break;
						}
						
				case 55:if(mapa[2][0].getFigura() == '0'){
						 setMapa(2,0,'O');
						 j2 = false;
						 break;
						}
						else{
						 j2 = true;
						 break;
						}
						
				case 56:if(mapa[2][1].getFigura() == '0'){
						 setMapa(2,1,'O');
						 j2 = false;
						 break;
						}
						else{
						 j2 = true;
						 break;
						}
						
				case 57:if(mapa[2][2].getFigura() == '0'){
						 setMapa(2,2,'O');
						 j2 = false;
						 break;
						}
						else{
						 j2 = true;
						 break;
						}
				case 27: j2 = false;
						 jugada = false;
						 break;
				default: cout<<"Elija otra coordenada"<<endl;
				}
				
			}
		}
		
		j1 = true;
		j2 = true;
		
	} while(jugada == true);	
}
//Si se detecta ganador dentro del void ganador,se deja de ejecutar la jugada.
if (gano == true){
	cout<<"Termino el juego, el ganador es: ";
	ganador();
}
	
}



int main (int argc, char *argv[]) {
	
	
	
	Juego jugadores;
	
	jugadores.jugada();

	
	
	
	
	return 0;
}

