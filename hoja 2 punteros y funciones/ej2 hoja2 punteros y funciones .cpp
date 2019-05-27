//ex2 page2 pointers and functions

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int menu(char *option = new char)
{

	do
	{
		cout << endl;
		cout << "                 MENU PRINCIPAL                 \n";
		cout << " =============================================== \n";
		cout << " A. Sumar 2 N" << char(163) << "meros Complejos \n";
		cout << " B. Restar 2 N" << char(163) << "meros Complejos \n";
		cout << " X. Salir del programa \n";
		cout << endl;
		cout << " Escoge una opci" << char(162) << "n: ";
		cin >> *option;
		cout << endl;

		return *option;

	} while (toupper(*option) != 'A' || toupper(*option) != 'B' || toupper(*option) != 'X');

}

void suma()
{
	float *r1 = new float; //parte real N°1

	float *im1 = new float; //parte imaginaria N°1
	
	cout << " N" << char(163) << "mero 1 \n";
	cout << " Parte real: ";
	cin >> *r1;
	cout << " Parte imaginaria: ";
	cin >> *im1;
	cout << endl;

	float *r2 = new float; //parte real N°2

	float *im2 = new float; //parte imaginaria N°2

	cout << " N" << char(163) << "mero 2 \n";
	cout << " Parte real: ";
	cin >> *r2;
	cout << " Parte imaginaria: ";
	cin >> *im2;
	cout << endl;

	cout << " ( " << *r1 << " + " << *im1 << "i ) + ( " << *r2 << " + " << *im2 << "i ) = ( " << *r1 + *r2 << " + " << *im1 + *im2 << "i ) \n";
	cout << endl;

	delete r1;
	delete im1;

	delete r2;
	delete im2;

}

void resta()
{
	float *r1 = new float; //parte real N°1

	float *im1 = new float; //parte imaginaria N°1

	cout << " N" << char(163) << "mero 1 \n";
	cout << " Parte real: ";
	cin >> *r1;
	cout << " Parte imaginaria: ";
	cin >> *im1;
	cout << endl;

	float *r2 = new float; //parte real N°2

	float *im2 = new float; //parte imaginaria N°2

	cout << " N" << char(163) << "mero 2 \n";
	cout << " Parte real: ";
	cin >> *r2;
	cout << " Parte imaginaria: ";
	cin >> *im2;
	cout << endl;

	cout << " ( " << *r1 << " + " << *im1 << "i ) - ( " << *r2 << " + " << *im2 << "i ) = ( " << *r1 - *r2 << " + " << *im1 - *im2 << "i ) \n";
	cout << endl;

	delete r1;
	delete im1;

	delete r2;
	delete im2;

}

int main()
{

	int *n1 = new int;
	char opt1 = 1;
	char *opt;
	opt = &opt1;

	do
	{
		menu(opt);

		if (toupper(*opt) == 'A')
		{
			suma();
		}
		if (toupper(*opt) == 'B')
		{
			resta();
		}
		
		if (toupper(*opt) == 'X')
		{
			return 0;
		}

		cout << endl;

		*n1 = 1;

	} while (*n1 == 1);

	delete n1;

	return 0;
}
