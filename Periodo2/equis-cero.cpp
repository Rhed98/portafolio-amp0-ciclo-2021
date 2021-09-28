#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

//RENE DANIEL GALAN CHINCHILLA
//GC101217

const int LADO = 3;

//PROTOTIPO DE FUNCIONES
void imprimirTablero(char tablero[][LADO]);
int marcarCasillaJugador(char tablero[][LADO]);
int leerNumero(string indicacion, string mensajeError, int min, int max);
int marcarCasillaComputadora(char tablero[][LADO]);
char ganadorFilas(char tablero[][LADO]);
char ganadorColumnas(char tablero[][LADO]);
char ganadorDiagonales(char tablero[][LADO]);
char determinarGanador(char tablero[][LADO]);
void jugar();

int main(){
	char jugarDeNuevo;
	srand(time(0)); //INICIALIZA LA SEMILLA DE LOS NUMEROS ALEATOREOS
	do {
		jugar();
		cout << "Desea jugar de nuevo (S|n)?";
		cin >> jugarDeNuevo;
		cout << endl;
	} while (toupper(jugarDeNuevo)=='S');
	
	return 0;
}

void jugar(){
	char tablero[LADO][LADO]={};
	char ganador = 0;
	
	cout << "JUEGO DE X-0" << endl;
	int casillasLibres = LADO * LADO;
	bool turnoJugador = true;
	imprimirTablero(tablero);
	
	while (casillasLibres > 0 && ganador == 0) {
		if (turnoJugador){
			casillasLibres -= marcarCasillaJugador(tablero);
		} else{
			casillasLibres -= marcarCasillaComputadora(tablero);
		}
		turnoJugador = !turnoJugador; // TURNO DEL OTRO JUGADOR
		ganador = determinarGanador(tablero);
	}
	switch (ganador) {
		case 'X':
			cout << "HAS GANADO!!" << endl;
			break;
		case '0':
			cout << "LA COMPUTADORA TE GANO :c" << endl;
			break;
		default:
			cout << "EMPATE..." << endl;
	}
}

void imprimirTablero(char tablero [][LADO]) {
	//
	//
	cout << "\n     0   1   2\n    -----------" << endl;
	for (int fila = 0; fila < LADO; fila++) {
			cout << " " << fila << " |";
		for (int columna = 0; columna < LADO; columna++){
			cout << " " << tablero[fila][columna]<< " |";	
		}
		//
		cout << "\n    -----------" << endl;
	}
	cout << endl;
}

int leerNumero (string indicacion, string mensajeError, int min, int max){
	int numero;
	cout << indicacion << ": ";
	
	//VALIDA QUE LA ENTRADA SEA UN ENTERO
	while (!(cin >> numero) || (numero < min || numero >= max)){
		cin.clear(); //LIMPIA LA ENTRADA
		cin.ignore(10000, '\n'); //DESCARTA LA ENTRADA HASTA ENCONTRAR EL SALTO DE LINEA
		cout << mensajeError << endl; //MUESTRA UN MENSAJE DE ERROR
		cout << indicacion << ": "; //LE DA OTRA OPORTUNIDAD AL USUARIO
	}
	
	return numero;
}

int marcarCasillaJugador(char tablero[][LADO]){
	int fila, columna;
	cout << "JUGADOR: " << endl;
	string mensaje = "Ingrese un valor entre 0 y " + to_string(LADO);
	fila = leerNumero("Fila", mensaje, 0, LADO);
	columna = leerNumero("Columna", mensaje, 0, LADO);
	while (tablero [fila][columna] != 0 ){
		cout << "Casilla ocupada. Intente de nuevo" << endl;
		fila =  leerNumero("Fila", mensaje, 0, LADO);
		columna = leerNumero ("Columna", mensaje, 0, LADO);
	}
	tablero[fila][columna]= 'X';
	imprimirTablero(tablero);
	return 1;
}

int marcarCasillaComputadora(char tablero[][LADO]){
	int fila, columna;
	fila = rand() % LADO;
	columna = rand() % LADO;
	while (tablero[fila][columna != 0]){
		fila= rand() % LADO;
		columna = rand() % LADO;
	}
	tablero[fila][columna] = '0';
	cout << "COMPUTADORA: " << endl;
	imprimirTablero(tablero);
	return 1;
}

char determinarGanador(char tablero[][LADO]){
	char ganador;
	
	//GANADOR POR FILAS
	ganador = ganadorFilas(tablero);
	
	//GANADOR POR COLUMNAS
	if (ganador == 0)
	ganador = ganadorColumnas(tablero);
	
	//GANADOR POR DAGONALES
	if (ganador == 0)
	ganador = ganadorDiagonales(tablero);
	
	return ganador;
}

char ganadorFilas (char tablero[][LADO]){
	for (int fila = 0; fila < LADO; fila++){
		//PRIMER CARACTER DE LA FILA
		char caracter = tablero[fila][0];
		int veces = 0;
		if (caracter != 0){
			//CONTAR CUANTAS VECES APARECE EL CARACTER EN LA FILA
			for (int columna = 0; columna < LADO; columna++){
				if (tablero[fila][columna] == caracter){
					veces++;
				}
			}
			if (veces == LADO){
				return caracter;
			}
		}
	}
	return 0;
}

char ganadorColumnas (char tablero[][LADO]){
		for (int columna = 0; columna < LADO; columna++){
		//PRIMER CARACTER DE LA FILA
		char caracter = tablero[0][columna];
		int veces = 0;
		if (caracter != 0){
			//CONTAR CUANTAS VECES APARECE EL CARACTER EN LA COLUMNA
			for (int fila = 0; fila < LADO; fila++){
				if (tablero[fila][columna] == caracter){
					veces++;
				}
			}
			if (veces == LADO){
				return caracter;
			}
		}
	}
	return 0;
}

char ganadorDiagonales (char tablero[][LADO]){
	char caracter;
	int veces;
	
	//DIAGONAL DE IZQUIERDA A DERECHA "\"
	caracter = tablero[0][0];
	veces = 0;
	if (caracter != 0){
		for (int i = 0; i < LADO, i++;)
			if (tablero[0][0] == caracter)
				veces++;
		if (veces == LADO)
			return caracter;
	}
	
	//DIAGONAL DE DERECHA A IZQUIERDA "/"
	caracter = tablero [0][LADO - 1];
	veces = 0;
	if (caracter != 0){
		for (int i = 0; i < LADO; i++)
			if (tablero[i][LADO - 1 - i] == caracter)
				veces++;	
		if (veces == LADO)
			return caracter;
		
	}
	return 0;
}