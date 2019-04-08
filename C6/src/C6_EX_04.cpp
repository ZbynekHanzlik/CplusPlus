//============================================================================
// Name        : C6_EX_04.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
    {
	cout << "tento program muze preformatovat vas pevny disk\n"
	     << "a zrusit vsechna vase data.\n "
	     << "Prejete si pokracovat? <a/n>" << endl;
	char ch;
	cin >> ch;
	if(ch == 'a' ||  ch == 'A')
	    cout << "byl jste upozornen!a\a\a\n";
	else if(ch == 'n' || ch == 'N')
	    cout << "moudra volba.\n";
	else
	    cout << "nezadal jste ani a ani n, tak si myslim,\n"
		 << "ze vase data v kazdem pripade znicim.\a\a\a\n";
	return 0;
    }
