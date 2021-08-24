#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	int movJug;
	cout << "Rene Daniel Galan Chinchilla   GC101217 \n";
	cout << "\n";
	cout << "Juguemos a Piedra, Papel, Tijera, Spook o Lagarto, Selecciona tu Movimiento \n";
	cout << "1.Piedra  2.Papel  3.Tijera  4.Spook  5.Lagarto \n :";
	cin >> movJug;
	srand(time(0));
	string movComp;
	int numMov = rand() % 3 + 1;
	switch(numMov){
		case 1:
			movComp = "Piedra";
			break;
		case 2:
			movComp = "Papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
		case 4:
			movComp = "Spook";
			break;
		case 5:
			movComp = "Lagarto";
			break;
	}
	cout << " La Computadora Escogio: " << movComp << endl;
	if (movJug == numMov){
		cout << "Empate \n";
	} else if ( ( movJug == 1) && ( numMov == 3) ){
		cout << " Ganaste \n";
	} else if ( ( movJug == 2) && ( numMov == 1) ){
		cout << " Ganaste \n";
	} else if ( ( movJug == 3) && ( numMov == 2) ){
		cout << " Ganaste \n";
		
	} else if ( ( movJug == 4) && ( numMov == 3) ){
		cout << " Ganaste \n";
	} else if ( ( movJug == 5) && ( numMov == 4) ){
		cout << " Ganaste \n";
		
	} else if ( ( movJug == 4) && ( numMov == 3) ){
		cout << " Ganaste \n";
	} else if ( ( movJug == 3) && ( numMov == 5) ){
		cout << " Ganaste \n";
	} else if ( ( movJug == 5) && ( numMov == 2) ){
		cout << " Ganaste \n";
	} else if ( ( movJug == 2) && ( numMov == 4) ){
		cout << " Ganaste \n";
	} else if ( ( movJug == 4) && ( numMov == 1) ){
		cout << " Ganaste \n";
	} else {
		cout << " Perdiste \n";
	}
	return 0;
}

