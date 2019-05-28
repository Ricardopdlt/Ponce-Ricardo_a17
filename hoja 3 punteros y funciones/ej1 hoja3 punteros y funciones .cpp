//ex1 page3 pointers and functions

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int menu(int *option = new int)
{

	do
	{
		cout << endl;
		cout << "                 MENU PRINCIPAL                 \n";
		cout << " =============================================== \n";
		cout << " 1. Calcular el seno \n";
		cout << " 2. Hallar el en" << char(130) << "simo d" << char (161) << "gito \n";
		cout << " 3. Fin \n";
		cout << endl;
		cout << " Escoge una opci" << char(162) << "n: ";
		cin >> *option;
		cout << endl;

		return *option;

	} while (*option < 1 || *option >3);

}

float fact( int n )
{
	float *fact = new float;
	*fact = 1;

	for (int i = 1; i <= n; i++)
	{
		*fact = *fact * i;
	}


	return *fact;
}

void seno()
{
	int *n = new int;
	float*x = new float;

	do
	{
		cout << " Ingrese el n" << char(163) << "mero de t" << char(130) << "rminos: ";
		cin >> *n;
		cout << endl;

	} while (*n < 1);


	cout << " Ingrese el grado del " << char(160) << "gulo X en radianes: ";
	cin >> *x;
	cout << endl;

	float *seno = new float;
	*seno = 0;

	int *expo = new int;

	for (int i = 0; i < *n; i++)
	{
		*expo = 2 * i + 1;
		*seno = *seno + pow(-1, i)* pow(*x, *expo) / fact(*expo);
	}

	cout << "El seno de " << *x << " radianes es: " << *seno << endl;
	cout << endl;

	delete x;
	delete n;
	delete seno;
	delete expo;

}

void digito( int *n, int *num)
{
	
	int *dig = new int;

	if (*n == 0)
	{
		*dig = *num % 10;
	}
	if (*n > 0 )
	{
		if (pow(10, *n) < *num)
		{
			for (int i = 0; i < *n; i++)
			{
				*num = *num / 10;
			}

			*dig = *num % 10;
		}
		if(pow(10, *n) > *num)
		{
			*dig = -1;

		}
	
	}
	
	

	cout << "El n - " << char (130) << "simo d" << char (161) << "gito es: " << *dig << endl;


}


int main()
{

	int *n1 = new int;
	int opt1 = 1;
	int *opt;
	opt = &opt1;

	do
	{
		menu(opt);

		if (*opt == 1)
		{
			seno();
		}
		if (*opt == 2)
		{
			int *n = new int;
			int *num = new int;

			cout << " El ingrese el valor de N: ";
			cin >> *num;
			cout << endl;

			do
			{
				cout << " El ingrese el t" << char(130) << "rmino n - " << char(130) << "simo (Considere el t" <<char(130) <<"rmino 0): ";
				cin >> *n;
				cout << endl;

			} while (*n < 0);

			digito(n, num);
		}
		if (*opt == 3)
		{
			return 0;
		}

		cout << endl;

		*n1 = 1;

	} while (*n1 == 1);

	delete n1;

	return 0;
}