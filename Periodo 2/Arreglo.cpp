#include <iostream>
#include <array>

using namespace std;

const int TAMANIO = 10; //numero de elementos en el arreglo

//Imprime hasta num_elementos de un arreglo
void imprimirArreglo(array<int, TAMANIO>&arr, int num_elementos){
	for	(int i = 0; i < arr.size() && i < num_elementos; i++){
		cout << arr[i] << endl;;
	}
}

int main (){
	array<int, TAMANIO>miArreglo;
	for (int i = 0; i < TAMANIO; i++){
		cin >> miArreglo[i];
	}
	cout << "Cantidad de Elementos: " << miArreglo.size() << endl;
	cout << "Primeros 10 Elementos: " << endl;
	imprimirArreglo(miArreglo, 10);
	
	return 0;
}