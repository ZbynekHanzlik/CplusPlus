//============================================================================
// Name        : C6_EX_03.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
    {
    const int fave = 27;
    int n;

    cout << "zkuste najit me oblibene cislo.\n";
    cout << " cislo je v rozsahu 1-100.\n";
	do
	{
	cin >> n;
	if(n < fave)
	    cout << "prilis nizke zkuste to znovu.\n";
	else if(n > fave)
	    cout << "prilis vysoke zkuste to znovu.\n";
	else
	    cout << fave << " je zpravne.\n";
	}while(n != fave);
	cout << "konec programu" << endl; // prints
	return 0;
    }
