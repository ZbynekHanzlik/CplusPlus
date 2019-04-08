//============================================================================
// Name        : C6_EX_02.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
    {
    char ch;

	cout << "pistte a ja budu opkovat.\n"; \
	while(ch != '.')
	    {
	    if(ch == '\n')
		cout << ch;
	    else
		cout << ++ch;
	    cin.get(ch);
	    }
	cout << "prosim omluvte male nedorozumeni.\n"; // divny vystup diky navyseni hodnoty znaku o 1 takze a = b atd.
	return 0;
    }
