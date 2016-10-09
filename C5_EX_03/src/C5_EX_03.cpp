//============================================================================
// Name        : C5_EX_03.cpp
// Author      : Revan
// Version     :
// Copyright   : Your copyright notice
// Description : Hodnoty výrazů
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int x ;
	cout << "vyraz x = 100 ma hodnotu "; // prints
	cout << (x = 100) << endl;
	cout << "nyni je x = " << x << endl;
	cout << "vyraz x < 3 ma hodnotu ";
	cout << (x < 3)<< endl;
	cout << "vyraz x > 3 ma hodnotu ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);
	cout << "vyraz x < 3 ma hodnotu ";
	cout << (x < 3) << endl;
	cout << "vyraz x > 3 ma hodnotu ";
	cout << (x > 3) << endl;
	return 0;
}
