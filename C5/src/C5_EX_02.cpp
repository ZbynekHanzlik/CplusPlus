//============================================================================
// Name        : C5_EX_02.cpp
// Author      : Revan
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "zadejte pocatecni hodnotu pro odpocitavani\n";
	int limit;
	cin >> limit;
	int i;
	for(i = limit; i; --i) // konec když je i rovno 0
		cout << "i = " << i << "\n";

	cout << "hotovo nyni je i = " << i << endl; // prints
	return 0;
}
