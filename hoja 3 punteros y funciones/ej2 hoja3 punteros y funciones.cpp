//ex2 page3 pointers and functions


#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace System;
using namespace std;


void Generar_numeros(int *n1, int *n2, int *n3, int *n4)
{
	srand(time(NULL));

	*n1 = 1 + (rand() % 40);

	*n2 = 1 + (rand() % 40);

	*n3 = 1 + (rand() % 40);

	*n4 = 1 + (rand() % 40);

}



int Hallar_mayor()
{

	int An1;
	int *ARn1;
	ARn1 = &An1;

	int An2;
	int *ARn2;
	ARn2 = &An2;

	int An3;
	int *ARn3;
	ARn3 = &An3;

	int An4;
	int *ARn4;
	ARn4 = &An4;

	Generar_numeros(ARn1, ARn2, ARn3, ARn4);

	int Ma;

	if (An1 > An2 && An1 > An3 && An1 > An4)
	{
		Ma = An1;
	}
	if (An2 > An1 && An2 > An3 && An2 > An4)
	{
		Ma = An2;
	}
	if (An3 > An1 && An3 > An2 && An3 > An4)
	{
		Ma = An3;
	}
	if (An4 > An1 && An4 > An2 && An4 > An3)
	{
		Ma = An4;
	}


	return Ma;
}



int Hallar_menor()
{

	int Bn1;
	int *BRn1;
	BRn1 = &Bn1;

	int Bn2;
	int *BRn2;
	BRn2 = &Bn2;

	int Bn3;
	int *BRn3;
	BRn3 = &Bn3;

	int Bn4;
	int *BRn4;
	BRn4 = &Bn4;

	Generar_numeros(BRn1, BRn2, BRn3, BRn4);

	int Me;

	if (Bn1 < Bn2 && Bn1 < Bn3 && Bn1 < Bn4)
	{
		Me = Bn1;
	}

	if (Bn2 < Bn1 && Bn2 < Bn3 && Bn2 < Bn4)
	{
		Me = Bn2;
	}

	if (Bn3 < Bn1 && Bn3 < Bn2 && Bn3 < Bn4)
	{
		Me = Bn3;
	}

	if (Bn4 < Bn1 && Bn4 < Bn2 && Bn4 < Bn3)
	{
		Me = Bn4;
	}

	return Me;
}



int Hallar_anterior_mayor()
{

	int Cn1;
	int *CRn1;
	CRn1 = &Cn1;

	int Cn2;
	int *CRn2;
	CRn2 = &Cn2;

	int Cn3;
	int *CRn3;
	CRn3 = &Cn3;

	int Cn4;
	int *CRn4;
	CRn4 = &Cn4;

	Generar_numeros(CRn1, CRn2, CRn3, CRn4);

	int aMa;

	if ((Cn2 > Cn1 && Cn1 > Cn3 && Cn1 > Cn4) || (Cn3 > Cn1 && Cn1 > Cn2 && Cn1 > Cn4) || (Cn4 > Cn1 && Cn1 > Cn2 && Cn1 > Cn3))
	{
		aMa = Cn1;
	}

	if ((Cn3 > Cn2 && Cn2 > Cn1 && Cn2 > Cn4) || (Cn1 > Cn2 && Cn2 > Cn3 && Cn2 > Cn4) || (Cn4 > Cn2 && Cn2 > Cn1 && Cn2 > Cn3))
	{
		aMa = Cn2;
	}

	if ((Cn1 > Cn3 && Cn3 > Cn2 && Cn3 > Cn4) || (Cn2 > Cn3 && Cn3 > Cn1 && Cn3 > Cn4) || (Cn4 > Cn3 && Cn3 > Cn1 && Cn3 > Cn2))
	{
		aMa = Cn3;
	}

	if ((Cn1 > Cn4 && Cn4 > Cn2 && Cn4 > Cn3) || (Cn2 > Cn4 && Cn4 > Cn1 && Cn4 > Cn3) || (Cn3 > Cn4 && Cn4 > Cn1 && Cn4 > Cn2))
	{
		aMa = Cn4;
	}

	return aMa;
}


int Hallar_posterior_menor()
{
	int Dn1;
	int *DRn1;
	DRn1 = &Dn1;

	int Dn2;
	int *DRn2;
	DRn2 = &Dn2;

	int Dn3;
	int *DRn3;
	DRn3 = &Dn3;

	int Dn4;
	int *DRn4;
	DRn4 = &Dn4;

	Generar_numeros(DRn1, DRn2, DRn3, DRn4);

	int pMe;


	if ((Dn2 > Dn1 && Dn3 > Dn1 && Dn1 > Dn4) || (Dn3 > Dn1 && Dn4 > Dn1 && Dn1 > Dn2) || (Dn2 > Dn1 && Dn4 > Dn1 && Dn3 > Dn1))
	{
		pMe = Dn1;
	}

	if ((Dn3 > Dn2 && Dn4 > Dn2 && Dn2 > Dn1) || (Dn1 > Dn2 && Dn3 > Dn2 && Dn2 > Dn4) || (Dn4 > Dn2 && Dn1 > Dn2 && Dn2 > Dn3))
	{
		pMe = Dn2;
	}

	if ((Dn1 > Dn3 && Dn2 > Dn3 && Dn3 > Dn4) || (Dn1 > Dn3 && Dn4 > Dn3 && Dn3 > Dn2) || (Dn2 > Dn3 && Dn4 > Dn3 && Dn3 > Dn1))
	{
		pMe = Dn3;
	}

	if ((Dn1 > Dn4 && Dn2 > Dn4 && Dn4 > Dn3) || (Dn2 > Dn4 && Dn3 > Dn4 && Dn4 > Dn1) || (Dn3 > Dn4 && Dn1 > Dn4 && Dn4 > Dn2))
	{
		pMe = Dn4;
	}

	return pMe;

}


 void Graficar(int *n1, int *n2, int *n3, int *n4)
{

	int n = 1;

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 41; j++)
		{
			if (i == 2 && j >= 41 - *n1 - 1)
			{
				if (i == 2 && j == 41 - *n1 - 1)
				{
					cout << *n1;
				}

				else
				{
					cout << "*";
					n++;
				}

			}

			else
			{
				cout << " ";
			}

			if (i == 3 && j >= 41 - *n2 - 1)
			{
				if (i == 3 && j == 41 - *n2 - 1)
				{
					cout << *n2;
				}

				else
				{
					cout << "*";
					n++;
				}

			}

			else
			{
				cout << " ";
			}

			if (i == 4 && j >= 41 - *n3 - 1)
			{
				if (i == 4 && j == 41 - *n3 - 1)
				{
					cout << *n3;
				}

				else
				{
					cout << "*";
					n++;
				}

			}

			else
			{
				cout << " ";
			}

			if (i == 5 && j >= 41 - *n4 - 1)
			{
				if (i == 5 && j == 41 - *n4 - 1)
				{
					cout << *n4;
				}

				else
				{
					cout << "*";
					n++;
				}

			}

			else
			{
				cout << " ";
			}

		}

		cout << endl;

	}

}



int main() {

	int n1;
	int *Rn1;
	Rn1 = &n1;

	int n2;
	int *Rn2;
	Rn2 = &n2;

	int n3;
	int *Rn3;
	Rn3 = &n3;

	int n4;
	int *Rn4;
	Rn4 = &n4;

	Generar_numeros(Rn1, Rn2, Rn3, Rn4);

	cout << "El primer n" << char(163) << "mero generado es: " << n1 << endl;

	cout << "El segundo n" << char(163) << "mero generado es: " << n2 << endl;

	cout << "El tercer n" << char(163) << "mero generado es: " << n3 << endl;

	cout << "El cuarto n" << char(163) << "mero generado es: " << n4 << endl << endl;


	
	int Ma1 = Hallar_mayor();
	int *RMa1;
	RMa1 = &Ma1;
	
	int Me1 = Hallar_menor();
	int *RMe1;
	RMe1 = &Me1;

	int aMa1 = Hallar_anterior_mayor();
	int *RaMa1;
	RaMa1 = &aMa1;

	int pMe1 = Hallar_posterior_menor();
	int *RpMe1;
	RpMe1 = &pMe1;

	cout << " El n" << char(163) << "mero mayor es: " << Ma1 << endl;
	cout << " El n" << char(163) << "mero menor es: " << Me1 << endl;
	cout << " El segundo n" << char(163) << "mero mayor es :" << aMa1 << endl;

	Graficar(RMe1, RpMe1, RaMa1, RMa1);



	_getch();

	return 0;

}