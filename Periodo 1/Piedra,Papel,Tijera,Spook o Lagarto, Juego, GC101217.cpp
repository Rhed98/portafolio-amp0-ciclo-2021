#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//PROTOTIPOS
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorSpook(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);

int main(){
	using namespace std;
	
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoJugador, movimientoComputadora);
	
	return 0;
}

//IMPLEMENTACION
std::string generarMovimientoComputadora(){
	std::string movimiento;
	int numeroAleatoreo;
	
	//Generar Numero Aleatoreo
	srand(time(0));
	numeroAleatoreo= rand() % 5 + 1;
	
		switch(numeroAleatoreo){
		case 1:
			movimiento = "piedra";
			break;
		case 2:
			movimiento = "papel";
			break;
		case 3:
			movimiento = "tijera";
			break;
		case 4:
			movimiento = "spook";
			break;
		case 5:
			movimiento = "lagarto";
			break;
	}
	
	std:: cout << "Computadorta: "<< movimiento << "\n";
	
	return movimiento;
}

std::string obtenerMovimientoJugador(){
	using namespace std;
	string movimiento;
	
	cout << "Piedra, Papel, Tijera, Spook o Lagarto (para terminar el juego, escribe Salir)? \n";
	cin >> movimiento;
	
	return movimiento;
}

void determinarGanador(std::string computadora, std::string jugador){
	if (computadora==jugador){
		std::cout << "Empate!\n";
	}
	else if (jugador=="piedra"){
		procesarEntradaJugadorPiedra(computadora);
	}
	else if (jugador=="papel"){
		procesarEntradaJugadorPapel(computadora);
	}
	else if (jugador=="tijera"){
		procesarEntradaJugadorTijera(computadora);
	}
	else if (jugador=="spook"){
		procesarEntradaJugadorSpook(computadora);
	}
	else if (jugador=="lagarto"){
		procesarEntradaJugadorLagarto(computadora);
	}
	else {
		std::cout << "Entrada no valida. Ingrese Piedra, Papel, Tijera, Spook o Lagarto";
	}
}
	

void procesarEntradaJugadorPiedra(std::string computadora){
	
	if (computadora=="papel"){
		std::cout << "La Computadora gana. Papel ahoga Piedra xD. \n";
	}
	else if (computadora=="spook"){
		std::cout << "La Computadora gana. Spook desintegra Piedra. \n";
	}
	else if (computadora =="tijera"){
		std::cout << "Ganaste. Piedra aplasta Tijeras. \n";
	}
	else if (computadora =="lagarto"){
		std::cout << "Ganaste. Piedra aplasta Lagarto. \n";
	}
}

void procesarEntradaJugadorPapel(std::string computadora){
	
	if (computadora=="tijera"){
		std::cout << "La Computadora gana. Tijera corta Papel. \n";
	}
	else if (computadora=="lagarto"){
		std::cout << "La Computadora gana. Lagarto come Papel. \n";
	}
	else if (computadora =="piedra"){
		std::cout << "Ganaste. Papel ahoga Piedra xD. \n";
	}
	else if (computadora =="spook"){
		std::cout << "Ganaste. Papel desaprueba Spook. \n";
	}
}

void procesarEntradaJugadorTijera(std::string computadora){
	
	if (computadora=="piedra"){
		std::cout << "La Computadora gana. Piedra aplasta Tijera. \n";
	}
	else if (computadora=="spook"){
		std::cout << "La Computadora gana. Spook desintegra Tijera. \n";
	}
	else if (computadora =="lagarto"){
		std::cout << "Ganaste. Tijeras decapitan Lagarto. \n";
	}
	else if (computadora =="papel"){
		std::cout << "Ganaste. Tijeras cortan Papel. \n";
	}
}

void procesarEntradaJugadorSpook(std::string computadora){
	
	if (computadora=="lagarto"){
		std::cout << "La Computadora gana. Lagarto envenena Spook. \n";
	}
	else if (computadora=="papel"){
		std::cout << "La Computadora gana. Papel desaprueba Spook. \n";
	}
	else if (computadora =="tijera"){
		std::cout << "Ganaste. Spook desintegra Tijeras. \n";
	}
	else if (computadora =="piedra"){
		std::cout << "Ganaste. Spook desintegra Piedra. \n";
	}
}

void procesarEntradaJugadorLagarto(std::string computadora){
	
	if (computadora=="tijera"){
		std::cout << "La Computadora gana. Tijera decapita Lagarto. \n";
	}
	else if (computadora=="piedra"){
		std::cout << "La Computadora gana. Piedra aplasta Lagarto. \n";
	}
	else if (computadora =="spook"){
		std::cout << "Ganaste. Lagarto come Spook. \n";
	}
	else if (computadora =="papel"){
		std::cout << "Ganaste. Lagarto come Papel. \n";
	}
}
