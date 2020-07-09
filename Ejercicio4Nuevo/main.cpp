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
		
};
class Juego {
	
private:
	
	Ficha mapa[3][3];
	bool gano = false;
	
	
	
	
public:
	
	Juego();
	
	void setMapa(int x, int y, char c);
	
	void inicializarMapa();
	
	void mostrar();
	
	void lugarDisponible();
	
	void ganador();
	
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

if (gano == false){
	
	inicializarMapa();
	
	bool j1 = true;
	bool j2 = true;
	bool jugada = true;
	
	cout<<"JUEGO TA-TE-TI PARA 2 JUGADORES"<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"JUGADOR 1 = X"<<endl;
	cout<<"JUGADOR 2 = O"<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	
	do{
		cout<<" JUGADOR 1"<<endl;
		mostrar();
		lugarDisponible();
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
		
		
		cout<<"JUGADOR 2"<<endl;
		mostrar();
		lugarDisponible();
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
if (gano == true){
	cout<<"Termino el juego, el ganador es: ";
	ganador();
}
	
}



int main (int argc, char *argv[]) {
	
	
	
	Juego jugador1;
	jugador1.jugada();

	
	
	
	
	return 0;
}

