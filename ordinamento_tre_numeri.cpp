/*
3 numeri in input a,b,c

stamparli in ordine crescente
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	
	//dichiarazione variabili
	int a, b, c;
	
	//-------------------INPUT------------------//
	cout << "Inserire il primo numero -> ";
	cin >> a;
	
	cout << "Inserire il secondo numero -> ";
	cin >> b;
	
	cout << "Inserire il terzo numero -> ";
	cin >> c;
	//------------------------------------------//
	
	//-----------CONTROLLO E STAMPA-------------//
	if(a >= b){
		if(a > c){
			// a >= b > c
			if(b > c)
				cout << c <<" " << b <<" " << a;
			// a > c > b
			else
				cout << b <<" " << c <<" " << a;
		}
		// c > a >= b OPPURE c = a = b
		else
			cout << a <<" " << b <<" " << c;
	}
	// se b > a
	else{
		if(b > c){
			// b > a > c
			if(a > c)
				cout << c <<" " << a <<" " << b;
			// b > c > a
			else
				cout << a <<" " << c <<" " << b;
		}
		// c > b > a
		else
			cout << a <<" " << b <<" " << c;
	}
	//------------------------------------------//
	
	return 0;
}
