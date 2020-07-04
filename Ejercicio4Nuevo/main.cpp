#include<iostream>
#include <cstdio>


using namespace std;

class Juego {
	
	private:
		
		int mapa[3][3];
		
		
		
	
	
	public:
		
		Juego();
		
		void SetMapa(int x, int y, char c);
		
		void Mostrar();
	
};

Juego::Juego(){}

void Juego::SetMapa(int x, int y, char c){
	
	mapa[x][y] = c;
	

}


void Juego::Mostrar(){
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			
			cout<<mapa[i][j]<<" |";
		}
		cout<<endl;
	}
}




int main (int argc, char *argv[]) {
	
	
	
	Juego Jugador1;
	Jugador1.SetMapa(0,0,'X');
	Jugador1.Mostrar();
	
	
	
	
	
	return 0;
}

