//============================================================================
// Name        : C6_EX_11.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

enum {cervene, modre, bile, ruzove, zelene, oranzove, fialove, cerne, zlutou};

int main()
{
	cout << "zadejte kod barvy (0-8).\n";
	int code;
	cin >> code;
	while(code >= cervene && code <= zlutou)
	{
		switch(code)
		{
			case cervene : cout << "mela cervene rty\n"; break;
			case modre : cout << "modra je dobra\n"; break;
			case bile : cout << "byl bily jako stena\n"; break;
			case ruzove : cout << "ruzove teplaky jsou trapne\n"; break;
			case zelene : cout << "prirodni zelen nadevse\n"; break;
			case oranzove : cout << "ma oblibena barva ORANGE\n"; break;
			case fialove : cout << "fialove voskovky do woken\n"; break;
			case cerne : cout << "takove je jen svedomi .. take i cerne\n"; break;
			case zlutou : cout << "lampy vrhaly zlute kuzele na ulici\n"; break;
		}
		cout << "zadejte kod barvy (0-8).\n";
		cin >> code;
	}
	cout << "sbohem\n";

	return 0;
}
