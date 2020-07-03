//
// Created by ake on 24/6/20.
//

#include "Tablero.h"
#include <iostream>

Tablero::Tablero() {}

void Tablero::setFichaIn(int x, int y, char c){
	
	mapa[x][y] = c;
}

void Tablero::mostrar() {
	
	for (int i = 0; i < 3; i++){
		cout<< "|";
		for (int j = 0; j < 3; j++){
			
			cout<<mapa[i][j].getFigura()<<" |";
		}
		cout<<endl;
	}
}

bool Tablero::hayFicha(int x, int y) {}

bool Tablero::compararFichas(int x0,int y0,int x1 ,int y1){}

bool Tablero::isComplete(){}
