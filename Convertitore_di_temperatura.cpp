/*
INPUT:
	- Temperatura iniziale in celsius (da 0 a 100)
	- Temperatura finale in celsius (massimo 5000)
	- step (non deve essere maggiore della differenza in temperatura)
	
OUTPUT:
	Stampare una tabella che parte dalla temperatura iniziale
	fino a raggiungere quella finale incrementadola di uno
	step alla volta.
*/

#include <iostream>

using namespace std;

#define TMAX_INIZIALE 100 //temperatura massima inziale
#define TMIN_INIZIALE -100 //temperatura minima iniziale
#define TMAX_FINALE 5000 //temperatura massima finale

int main(int argc, char *argv[]){
	
	// DICHIARAZIONE DELLE VARAIBILI
	double t_iniziale, t_finale, step, t_diff;
	float t_fahrenheit;
	
	//------------------------------INPUT-------------------------------------//
	
	//INPUT TEMPERATURA INIZIALE
	do{
		cout << "Inserire la temperatura iniziale in Celsius (da "<<TMIN_INIZIALE<<" a "<<TMAX_INIZIALE<<") -> ";
		cin >> t_iniziale;
		
		if(t_iniziale < TMIN_INIZIALE || t_iniziale > TMAX_INIZIALE)
			cout<<"La temperatura iniziale deve essere compresa tra "<<TMIN_INIZIALE<<" e "<<TMAX_INIZIALE<<" Celsius"<<endl<<endl;
			
	}while(t_iniziale < TMIN_INIZIALE || t_iniziale > TMAX_INIZIALE);
	
	//INPUT TEMPERATURA FINALE
	do{
		cout << "Inserire la temperatura finale in Celsius ( > " << t_iniziale << " a "<<TMAX_FINALE<<") -> ";
		cin >> t_finale;
		
		if(t_finale <= t_iniziale || t_finale > TMAX_FINALE)
			cout<<"La temperatura finale deve essere > "<< t_iniziale << " e <= "<<TMAX_FINALE<<" Celsius"<<endl<<endl;
			
	}while(t_finale <= t_iniziale || t_finale > TMAX_FINALE);
	
	//differenza di temperatura
	t_diff = t_finale-t_iniziale;
	
	//INPUT STEP
	do{
		cout << "Inserire il valore dello step (da piu' di 0 a "<<t_diff<<") -> ";
		cin >> step;
		
		if(step <= 0 || step > t_diff)
			cout<<"Il valore dello step deve essere > 0 o <= "<<TMAX_INIZIALE<<endl<<endl;
			
	}while(step <= 0 || step > t_diff);
	
	//------------------------------------------------------------------------//
	
	//------------------------STAMPA CONVERSIONI------------------------------//
	
	cout << "\n\n----------STAMPA----------\n\n";
	cout << "Celsius\t\t"<<"Fahrenheit\n";
	cout << "--------\t"<<"---------\n";
	
	//stampa 6 cifre decimali
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
	cout.precision(6);
	
	
	while(t_finale >= t_iniziale){
		//converto la temperatura iniziale da celsius a fahrenheit
		t_fahrenheit = (t_iniziale*9)/5 + 32;
		cout << t_iniziale << "\t" << t_fahrenheit << endl;
		
		//incremento il valore iniziale della temperatura
		t_iniziale += step;
	}
	
	//------------------------------------------------------------------------//
	
	return 0;
}
