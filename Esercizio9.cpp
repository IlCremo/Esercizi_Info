/*
© Cremonesi Andrea 2020

Realizzare un programma che legga tre valori interi (n1, n2, n3) compresi tra [1 e 100] 
e poi presenti a video il seguente menu` di operazioni possibili:
	A - somma tra n1, n2 e n3
	B - prodotto tra n1 e n2
	C - sottrazione tra n3 e n1
	D - divisione tra n1 e n2 (risultato double).
	X - uscita dal programma

Legge poi un carattere da tastiera: se il carattere e` tra quelli indicati nel menu`, si deve eseguire l’operazione richiesta, 
stampare i numeri utilizzati nell’operazione e il risultato e poi ripresentare il menu` 
altrimenti il carattere deve essere ignorato e si deve ripresentare solo il menu`.

Nel caso il carattere sia X, il programma termina.
*/

#include <iostream>

using namespace std;

#define MIN 1
#define MAX 100

int main(int argc, char *argv[]){
	
	int n1, n2, n3;
	char operazione;
	
	/* -Input- */
	do{
		cout << "Inserire il valore di n1 ["<<MIN<<", "<<MAX<<"] -> ";
		cin >> n1;
		if(n1 < MIN || n1 > MAX)
			cout << "Il valore non e' valido\n";
			
	}while(n1 < MIN || n1 > MAX);
	
	do{
		cout << "Inserire il valore di n2 ["<<MIN<<", "<<MAX<<"] -> ";
		cin >> n2;
		if(n2 < MIN || n2 > MAX)
			cout << "Il valore non e' valido\n";
	}while(n2 < MIN || n2 > MAX);
	
	do{
		cout << "Inserire il valore di n3 ["<<MIN<<", "<<MAX<<"] -> ";
		cin >> n3;
		if(n3 < MIN || n3 > MAX)
			cout << "Il valore non e' valido\n";
	}while(n3 < MIN || n3 > MAX);
	
	/* -OPERAZIONI- */
	do{
		//pulisco la console
		system("cls");
		
		/* -Stampa Menu- */
		cout<<"Scegli un'operazione :\
		\n\
		\nA - somma tra n1, n2 e n3\
		\nB - prodotto tra n1 e n2\
		\nC - sottrazione tra n3 e n1\
		\nD - divisione tra n1 e n2\
		\nX - uscita dal programma\
		\n\
		\n-> ";
		
		cin >> operazione;
		
		switch(operazione){
			case 'A': case 'a':
				cout << "\nSomma : "<<n1<<" + "<<n2<<" + "<<n3<< " = "<<n1+n2+n3<<"\n\n";
				break;
			case 'B': case 'b':
				cout << "\nProdotto : "<<n1<<" * "<<n2<< " = "<<n1*n2<<"\n\n";
				break;
			case 'C': case 'c':
				cout << "\nDifferenza : "<<n1<<" - "<<n3<< " = "<<n1-n3<<"\n\n";
				break;
			case 'D': case 'd':
				cout << "\nDivisione : "<<n1<<" / "<<n2<<" = "<<(double)n1/n2<<"\n\n";
				break;
			case 'X': case'x':
				cout << "\nUscita dal programma...\n";
				break;
			default:
				cout << "\nValore errato\n\n";
				break;
		}
		
		system("pause");
		
	}while(operazione != 'x' && operazione != 'X');
}
