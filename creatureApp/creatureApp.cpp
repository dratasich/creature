// creatureApp.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//
#include "stdafx.h"
#include "Creature.h"
#include "HumanBeing.h"
#include "Animal.h"
#include "Reptile.h"
#include <iostream>
using namespace std;


void showMenu()
{
	cout << endl;
	cout << "Mann ............. 1" << endl;
	cout << "Frau ............. 2" << endl;
	cout << "Bartagame ........ 3" << endl;
	cout << "Programmende ..... 9" << endl << endl;
	cout << "Ihre Wahl: ";
}

int _tmain(int argc, _TCHAR* argv[])
{
	HumanBeing*	pHumanBeing;
	Reptile*	pReptile;
	int			selection;

	do
	{
		showMenu();
		cin >> selection;
		cout << endl;

		pHumanBeing = NULL;
		pReptile = NULL;

		switch (selection)
		{
		case 1:
			pHumanBeing = new HumanBeing(75, 182, "Mann", 2, 2);
			break;
		case 2:
			pHumanBeing = new HumanBeing(53, 167, "Frau", 2, 2);
			break;
		case 3:
			pReptile = new Reptile(1, 30, "Bartagame", 4);
			break;
		case 9:
			cout << endl << "Programmende!" << endl;
			break;
		default:
			cout << endl << "Falsche Eingabe!" << endl << endl;
			break;
		}

		cout << endl;
		//now we have a lot of code,
		//100 pages later on ...
		if (pHumanBeing != NULL)
			pHumanBeing->showAttributes();
		else if (pReptile != NULL)
			pReptile->showAttributes();

		cout << endl;
		//... again there is a lot of code,
		//150 pages later ...
		if (pHumanBeing != NULL)
			pHumanBeing->moveOn();
		else if (pReptile != NULL)
			pReptile->moveOn();

		cout << endl;
		//... 50 pages later ...
		//don't forget to delete the objects
		if (pHumanBeing != NULL)
			delete pHumanBeing;
		else if (pReptile != NULL)
			delete pReptile;

	} while (selection != 9);

	return 0;
}

