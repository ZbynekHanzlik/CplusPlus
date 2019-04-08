//============================================================================
// Name        : C6_EX_10.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void showMenu();
void report();
void comfort();
int main()
{
	showMenu();
	int choice;
	cin >> choice;
	while(choice != 5)
	{
		switch (choice)
		{
			case 1: cout << "\a";
				break;
			case 2: report();
				break;
			case 3: cout << "vedouci byl pritomen cely den\n";
				break;
			case 4: comfort();
				break;
			default: cout << "to neni volba\n";
		}
		showMenu();
		cin >> choice;
	}
	cout << "sbohem";
	//return 0;
}


void showMenu()
{
	cout << "prosim zadejte jednu z nasledujicich moznosti \n"
		 << "1) poplach             2) zprava\n"
		 << "3) vymluva             4) uklidneni\n"
		 << "5) konec\n";
}


void report()
{
	cout << "to byl vytecny tyden pro obchod.\n"
		 << "Trzby vzrostly o 120 %. Vydaje poklesly o 20 %.\n";
}

void comfort()
{
	cout << "Vasi zamestnanci si mysli, ze jste nejlepsi vykonny reditel\n"
		 << "v branzi. Spravni rada si mysli,\n "
		 << "ze jste nejlepsi vykonny reditel v branzi.\n";
}
