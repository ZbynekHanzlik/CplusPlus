//============================================================================
// Name        : C6_EX_09.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
    {
    int a,b;
	cout << "zadejte dve cisla\n" << endl;
	cin >> a >> b;
	cout << "vetsi z cisel " << a << " a " << b;
	int c = a > b ? a : b;
	cout << " je " << c;
	return 0;
    }
