#include <iostream>
#include <limits> 

using namespace std;

int main (){
	
	int imin = numeric_limits<int>::min();
	int imax = numeric_limits<int>::max();
	
	cout << " imin = " << imin << endl;
	cout << " imax = " << imax << "\n";
	cout << "Tamanio de int : " << sizeof(int) <<endl;
	
	float fmin = numeric_limits<float>::min();
	float fmax = numeric_limits<float>::max();
	
	cout << " fmin = " << fmin << endl;
	cout << " fmax = " << fmax << "\n";
	cout << "Tamanio de float : " << sizeof(float) <<endl;
	
	char cmin = numeric_limits<char>::min();
	char cmax = numeric_limits<char>::max();
	
	cout << " cmin = " << cmin << endl;
	cout << " cmax = " << cmax << "\n";
	cout << "Tamanio de char : " << sizeof(char) <<endl;
	
	bool bmin = numeric_limits<bool>::min();
	bool bmax = numeric_limits<bool>::max();
	
	cout << " bmin = " << bmin << endl;
	cout << " bmax = " << bmax << "\n";
	cout << "Tamanio de bool : " << sizeof(bool) <<endl;
	
	double dmin = numeric_limits<double>::min();
	double dmax = numeric_limits<double>::max();
	
	cout << " dmin = " << dmin << endl;
	cout << " dmax = " << dmax << "\n";
	cout << "Tamanio de double : " << sizeof(double) <<endl;
	
	return 0;
	
}
