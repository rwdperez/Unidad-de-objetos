#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class armadura{
	
	int resistencia;
	
	
public:
	
	armadura();
	void recibirDanio(int danio);
	
};

armadura::armadura(){
	
	armadura::resistencia = 100;
	
	
}

void armadura::recibirDanio(int danio){
	
	armadura::resistencia=resistencia-danio;
	
	cout<<resistencia;
}






int main(int argc, char *argv[]) {
	
	
	armadura jug1;
	
	jug1.recibirDanio(30);
	
	
	return 0;
}

