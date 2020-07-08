#include<iostream>
#include<cstdio>
#include "conio2.h"


using namespace std;


class Ficha {
	
	private:
		
		char figura;
	public:
		
		Ficha();
		
		Ficha(char);
		
		void setFigura(char);
		
		char getFigura();
		
		bool compare(Ficha f);
};
class Juego {
	
private:
	
	Ficha mapa[3][3];
	
	
	
	
	
public:
	
	Juego();
	
	void setMapa(int x, int y, char c);
	
	void inicializarMapa();
	
	void mostrar();
	
	void lugarDisponible();
	
	void verMapa();
	
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

bool Ficha::compare(Ficha f) {
	
	if ( f.figura == figura){
		
		return true;
	}
	else{
		
		return false;
	}
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

}

void Juego::lugarDisponible(){
	

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
	cout<<endl;

	
	

}
void Juego::jugada(){
	
	inicializarMapa();
	
	bool j1 = true;
	bool j2 = true;
	bool jugada = true;
	
	
	
	do{
		cout<<" Jugador 1"<<endl;
		lugarDisponible();
		
		while (j1 == true){
			
			if (kbhit()){
				int tecla = getch();
				switch (tecla){
					
				case 49: setMapa(0,0,'X');
						 mostrar();
						 j1 = false;
						 break;
				case 50: setMapa(0,1,'X');
						 mostrar();
						 j1 = false;
						 break;
				case 51: setMapa(0,2,'X');
						 mostrar();
						 j1 = false;
						 break;
				case 52: setMapa(1,0,'X');
						 mostrar();
						 j1 = false;
						 break;
				case 53: setMapa(1,1,'X');
						 mostrar();
						 j1 = false;
						 break;
				case 54: setMapa(1,2,'X');
						 mostrar();
						 j1 = false;
						 break;
				case 55: setMapa(2,0,'X');
						 mostrar();
						 j1 = false;
						 break;
				case 56: setMapa(2,1,'X');
						 mostrar();
						 j1 = false;
						 break;
				case 57: setMapa(2,2,'X');
						 mostrar();
						 j1 = false;
						 break;
							
				}
				
			}
		}
		
		
		cout<<"Jugador 2"<<endl;
		lugarDisponible();
		while (j2 == true){
			
			if (kbhit()){
				int tecla = getch();
				switch (tecla){
					
				case 49: setMapa(0,0,'O');
						 mostrar();
						 j2 = false;
						 break;
				case 50: setMapa(0,1,'O');
						 mostrar();
						 j2 = false;
						 break;
				case 51: setMapa(0,2,'O');
						 mostrar();
						 j2 = false;
						 break;
				case 52: setMapa(1,0,'O');
						 mostrar();
						 j2 = false;
						 break;
				case 53: setMapa(1,1,'O');
						 mostrar();
						 j2 = false;
						 break;
				case 54: setMapa(1,2,'O');
						 mostrar();
						 j2 = false;
						 break;
				case 55: setMapa(2,0,'O');
						 mostrar();
						 j2 = false;
						 break;
				case 56: setMapa(2,1,'O');
						 mostrar();
						 j2 = false;
						 break;
				case 57: setMapa(2,2,'O');
						 mostrar();
						 j2 = false;
						 break;
				}
				
			}
		}
		
		j1 = true;
		j2 = true;
		
	} while(jugada == true);	
	
}



int main (int argc, char *argv[]) {
	
	
	
	Juego jugador1;
	jugador1.jugada();

	
	
	
	
	return 0;
}

