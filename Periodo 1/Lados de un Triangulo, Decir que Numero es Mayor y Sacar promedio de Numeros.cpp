#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
int main(){
	
	//CLASIFICAR TRIANGULOS Y SU AREA
	
	float Lado1, Lado2, Base, S, A;

	cout << "Rene Daniel Galan Chinchilla   GC101217 \n";
	cout << "\n";
	cout << "Escribe el tamaño del primer lado que tiene el Triangulo \n";
	cin >> Lado1;
	cout << "Escribe el tamaño del segundo lado que tiene el Triangulo \n";
	cin >> Lado2;
	cout << "Escribe el tamaño de la base que tiene el Triangulo \n";
	cin >> Base;
	
	S= (Lado1+Lado2+Base)/2;
	A= sqrt(S*(S-Lado1)*(S-Lado2)*(S-Base));
	cout << "\n";
	
	if (( Lado1 == Lado2 )  && ( Lado1 == Base)){
		cout << "El triangulo es Equilatero y su area es: \n" <<A;
	} else if ( ( Lado1 == Lado2 )  && ( Lado1 != Base) ){
		cout << "El Triangulo es Isoseles y su area es: \n" <<A;
	} else if ( ( Lado1 == Base) && ( Lado1 != Lado2) ){
		cout << "El Triangulo es Isoseles y su area es: \n" <<A;
	} else if ( ( Lado1 != Base) && ( Lado1 != Lado2) ){
		cout << "El Triangulo es Escaleno y su area es: \n" <<A;
	}	
	return 0;

	//QUE NUMERO ES MAYOR
	/*
	float n1, n2, n3, n4, n5;

	cout << "Rene Daniel Galan Chinchilla   GC101217 \n";
	cout << "\n";
	cout << "Escribe el Primer Numero \n";
	cin >> n1;
	cout << "Escribe el Segundo Numero \n";
	cin >> n2;
	cout << "Escribe el Tercer Numero \n";
	cin >> n3;
	cout << "Escribe el Cuarto Numero \n";
	cin >> n4;
	cout << "Escribe el Quinto Numero \n";
	cin >> n5;
	
	if ( n1 > n2, n1 >n3, n1 > n4, n1 >n5 ){
		cout << "El Primer numero es el Mayor";
	} else if ( n2 > n1, n2 >n3, n2 > n4, n2 >n5){
		cout << "El Segundo numero es el Mayor";
	} else if (  n3 > n1, n3 >n2, n3 > n4, n3 >n5 ){
		cout << "El Tercer numero es el Mayor";
	} else if (  n4 > n1, n4 >n2, n4 > n3, n4 >n5 ){
		cout << "El Cuarto numero es el Mayor";
	}else
		cout <<"El Quinto Numero es el Mayor";
	return 0;
	*/
	
	//VALOR PROMEDIO DE X CANTIDAD DE NUMEROS
	/*
	float contador, n, suma, total, ni;
	cout << "Rene Daniel Galan Chinchilla   GC101217 \n";
	cout << "\n";
	cout << "Escribe los numeros de los quieras conocer su promedio, recuerda que para terminar de contar ingresa el numero 0";
	cout << "\n";
	cout << "\n";
	cout << "Escribe un Numero: \n";
	cin >> n;
	suma=n;

	while (n!=0){
	
	cout << "Escribe un Numero: \n";
	cin >> n;
	
	suma=suma + n;
	contador++ ;
	}

	total=suma/contador;
	cout << "El resultado promedio de los numeros que ingresaste es: "<<total;
	
	return 0;
	*/
}

