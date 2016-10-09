//============================================================================
// Name        : C5_Test_09.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main()
{
using namespace std;

int numrows=0;
int denominator=1;

cout << "Enter number of rows: ";
(cin >> numrows).get();

for (int i=0; i < numrows; i++)
{

    for (int j=0; j < (numrows-denominator); j++)
            cout << ".";

    for (int y=0; y < denominator; y++)
            cout << "*";

    cout << "\n";
    denominator++;
}

return 0;
}
