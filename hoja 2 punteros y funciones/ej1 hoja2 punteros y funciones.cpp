//ex1 page2 pointers and functions

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
		cout << " 1) Determinar el factorial de un n" <<char (163) <<"mero \n";
		cout << " 2) Calcular el valor e^a \n";
		cout << " 3) Imprime un rombo \n";
		cout << " 4) Fin \n";
		cout << endl;
		cout << " Escoge una opci" << char(162) << "n: ";
		cin >> *option;
		cout << endl;

		return *option;

	} while (*option < 1 || *option >4);

}

void factorial()
{
	int *n = new int;
	do
	{
		cout << " Ingrese el n" << char(163) << "mero del cual desea obtener su factorial: ";
		cin >> *n;
		cout << endl;

	} while (*n < 1);

	float *factorial = new float;
	*factorial = 1;

	for (int i = 1; i <= *n; i++)
	{
		*factorial = *factorial * (i);
	}

	cout << " El factorial de " << *n << " es " << *factorial;
	cout << endl;

	delete n;
	delete factorial;

}

void exponencial()
{
	int *n = new int;
	int *a = new int;

	cout << " El exponiencial e^a = 1 + a + (a^2/2!) + .... + (a^k/k!) \n";
	cout << endl;

	do
	{
		cout << " Ingrese el n" << char(163) << "mero de terminos: ";
		cin >> *n;
		cout << endl;

	} while (*n < 1);

	cout << " Ingrese el valor a: ";
	cin >> *a;
	cout << endl;

	float *expo = new float;
	*expo = 0;

	float *fact = new float;
	*fact = 1;

	for (int i = 1; i < *n; i++)
	{
		*fact = *fact * (i);
		*expo = *expo + (pow(*a, i) / *fact);
	}

	cout << " El resultado del exponencial es " << 1 + *expo;
	cout << endl;

	delete n;
	delete a;
	delete fact;
	delete expo;

}

void Dibuja()
{
	int *n = new int;

	do
	{
		cout << " Ingrese la longitud de los lados del rombo: ";
		cin >> *n;
		cout << endl;

	} while (*n < 1);

	for (int j = 0; j < *n; j++)
	{

		for (int i = 0; i < 3; i++)
		{
			cout << "  ";
		}
		for (int i = 0; i < *n - j - 1; i++)
		{
			cout << "  ";
		}

		for (int i = 0; i < 2 * j + 1; i++)
		{
			cout << i + 1 << " ";
		}

		cout << endl;

	}

	for (int j = *n - 2; j >= 0; j--)
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "  ";
		}
		for (int i = 0; i < *n - j - 1; i++)
		{
			cout << "  ";
		}

		for (int i = 0; i < 2 * j + 1; i++)
		{
			cout << i + 1 << " ";
		}

		cout << endl;

	}


	delete n;

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
			factorial();
		}
		if (*opt == 2)
		{
			exponencial();
		}
		if (*opt == 3)
		{
			Dibuja();
		}
		if (*opt == 4)
		{
			return 0;
		}

		cout << endl;

		*n1 = 1;

	} while (*n1 == 1);

	delete n1;

	return 0;
}
