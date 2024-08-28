#include<iostream>
using namespace std;



int maximum( int x, int y, int z);
void sortierung(int x, int y, int z);

 
	


int main()
{
	//Deklaration
	int zahlen[3];
	
	zahlen[0];
	zahlen[1];
	zahlen[2];
	char nochmal;

	do
	{

		//Eingabe der Zahlen 
		cout << "Geben Ihr erst  Zahl ein :  ";
		cin >> zahlen[0];

		cout << "Geben Ihr zweite  Zahl ein :  ";
		cin >> zahlen[1];
		cout << "Geben Ihr dritte  Zahl ein :  ";
		cin >> zahlen[2];
		cout << endl;

		// Ausgabe der Werte des Feldes zahlen
		for (int i = 0; i < 3; i++)
			cout << "zahlen[" << i << "] = " << zahlen[i] << endl << endl;

		// Ausgabe der Max Werte des Feldes Zahlen
		cout << "Der max Zahl ist: " << maximum(zahlen[0], zahlen[1], zahlen[2]) << endl << endl;
		
		////Ausgabe der Funktion sortierung
		  sortierung(  zahlen[0],  zahlen[1],  zahlen[2]) ;

		//neue Zahlen eingeben?
		cout << "nochmal ?  j/n : ";
		cin >> nochmal;


	} while (nochmal != 'n' && nochmal != 'N');


	return 0;
}

int maximum(int x, int y, int z)
{
	if (x > y && x > z)
		return x;
	if (y > x && y > z)
		return y;
	if (z > x && z > y)
		return z;

	return 0;

}

void sortierung(int x, int y, int z)
{
	if (x < y && y < z)
	{
		cout << "aufsteigende sortierung : " << x << " " << y << " " << z << endl << endl;
	}

	if (x < z && z < y && x < y)
	{
		cout << "aufsteigende sortierung : " << x << " " << z << " " << y << endl << endl;
	}

	if (y < x && y < z && x < z)
	{
		cout << "aufsteigende sortierung : " << y << " " << x << " " << z << endl << endl;
	}

	if (x > y && y < z && x > z)
	{
		cout << "aufsteigende sortierung : " << y << " " << z << " " << x << endl << endl;
	}

	if (x < y && y > z && x > z)
	{
		cout << "aufsteigende sortierung : " << z << " " << x << " " << y << endl << endl;
	}

	if (x > y && y > z)
	{
		cout << "aufsteigende sortierung : " << z << " " << y << " " << x << endl << endl;
	}

	
}