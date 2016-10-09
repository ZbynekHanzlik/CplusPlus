//============================================================================
// Name        : block.cpp
// Author      : Revan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "std_lib_facilities.h"
using namespace std;

int main()
{

    double sum = 0.0;
    double res;
    for (int var = 0; var < 5; var++)
    {
		cout << "hodnota " << var << " : ";
		cin >> res;
		sum += res;
	}
    cout << " soucet vsech argumentu je  " << sum << endl;
    cout << "prumer je " << sum / 5  <<  ".\n";
	return 0;
}
