//============================================================================
// Name        : C5_EX_04.cpp
// Author      : Revan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

const int ArSize = 16;
int main()
{
	double factorials[ArSize];
	factorials[1] = factorials[0] = 1.0;
	int i;
	for(i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for(i = 0; i < ArSize; i++)
		cout << i << " != " << factorials[i] << endl; // prints factorials

	cout << "faktorialy roustou rychle ";
	return 0;
}
