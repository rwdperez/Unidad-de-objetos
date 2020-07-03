//
// Created by ake on 24/6/20.
//

#include "Juego.h"
#include "conio2.h"

Juego::Juego(){}

void Juego::play() {
	
	bool j1 = true;
	bool j2 = true;
	bool jugada = true;
	cout<<" Tablero inicial vacio "<<endl;
	
	Tablero T;
	
	T.setFichaIn(0,0,' ');
	T.setFichaIn(0,1,' ');
	T.setFichaIn(0,2,' ');
	T.setFichaIn(1,0,' ');
	T.setFichaIn(1,1,' ');
	T.setFichaIn(1,2,' ');
	T.setFichaIn(2,0,' ');
	T.setFichaIn(2,1,' ');
	T.setFichaIn(2,2,' ');
	
	T.mostrar();
	
do{
	cout<<" Jugador 1"<<endl;
	
	while (j1 == true){
		
		if (kbhit()){
			int tecla = getch();
			switch (tecla){
				
			case 49: T.setFichaIn(0,0,'X');
			T.mostrar();
			break;
			case 50: T.setFichaIn(0,1,'X');
			T.mostrar();
			break;
			case 51: T.setFichaIn(0,2,'X');
			T.mostrar();
			break;
			case 52: T.setFichaIn(1,0,'X');
			T.mostrar();
			break;
			case 53: T.setFichaIn(1,2,'X');
			T.mostrar();
			break;
			case 54: T.setFichaIn(1,3,'X');
			T.mostrar();
			break;
			case 55: T.setFichaIn(2,0,'X');
			T.mostrar();
			break;
			case 56: T.setFichaIn(2,1,'X');
			T.mostrar();
			break;
			case 57: T.setFichaIn(2,2,'X');
			T.mostrar();
			break;
			default: cout<<"Presione la tecla correcta"<<endl;
			}
			j1 = false;
			
		}
	}
	
	
	cout<<"Jugador 2"<<endl;
	
	while (j2 == true){
		
		if (kbhit()){
			int tecla = getch();
			switch (tecla){
				
			case 49: T.setFichaIn(0,0,'O');
			T.mostrar();
			break;
			case 50: T.setFichaIn(0,1,'O');
			T.mostrar();
			break;
			case 51: T.setFichaIn(0,2,'O');
			T.mostrar();
			break;
			case 52: T.setFichaIn(1,0,'O');
			T.mostrar();
			break;
			case 53: T.setFichaIn(1,2,'O');
			T.mostrar();
			break;
			case 54: T.setFichaIn(1,3,'O');
			T.mostrar();
			break;
			case 55: T.setFichaIn(2,0,'O');
			T.mostrar();
			break;
			case 56: T.setFichaIn(2,1,'O');
			T.mostrar();
			break;
			case 57: T.setFichaIn(2,2,'O');
			T.mostrar();
			break;
			default: cout<<"Presione la tecla correcta"<<endl;
			}
			j2 = false;
			
		}
	}
	
	j1 = true;
	j2 = true;
	
} while(jugada == true);	

	cout<<"Holis"<<endl;
}

void Juego::imprimirCabecera() {}

void Juego::imprimirGanador(bool turno1) {}

void Juego::imprimirTerminar(bool turno1) {}

void Juego::imprimirOpciones(bool opciones) {}

int Juego::getKey(){}

void Juego::insertKey(int k, char c){}

bool Juego::checkTateti(){}

bool Juego::checkTermino(){}

void Juego::imprimirTablero() {}
