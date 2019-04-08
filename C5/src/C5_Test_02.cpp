//============================================================================
// Name        : C5_Test_02.cpp
// Author      : Revan
// Version     : 0.1
// Copyright   : Open Source
// Description : výpočet mezivýsledku zadávaných čísel 0 je konec
//============================================================================

#include <iostream>
using namespace std;

int main()
    {
	cout << "zadavejte cisla" << endl;
	int soucet = 0, vstup;
	do
	    {
		    cin >> vstup;
		    soucet += vstup;
		    cout << soucet << endl;

	    }while(vstup != 0);

	cout << " konec " << soucet << endl; // prints
	return 0;
    }
