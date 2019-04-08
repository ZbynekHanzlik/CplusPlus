//============================================================================
// Name        : C6_EX_07.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <climits>
#include <cstdio>
bool is_int(double);
using namespace std;
int main() {
	cout << "hele frajere zadej celociselnou hodnotu\n: ";
	int any;
	cin >> any;
	while(!is_int(any))
	    {
	    cout << "mimo rozsah muzete zadat od " << INT_MIN << " do " << INT_MAX << endl;
	    cin >> any;
	    }
	char ch;
	cout << "zadal jsi cislo" << any << " nazdar\n";
	return 0;


}
bool is_int(double integer)
    {
    if(integer <= INT_MAX && integer >= INT_MIN)
	return true;
    else
	return false;
    }

