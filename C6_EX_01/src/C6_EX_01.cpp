//============================================================================
// Name        : C6_EX_01.cpp
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
     int spaces = 0;
     int stars = 0;
     int total = 0;
     cin.get(ch);
     while(ch != '.')
	 {
	 if(ch == ' ')
	     ++spaces;
	 if(ch == '*')
	     ++stars;
	 ++total;
	cin.get(ch);
	 }
     cout << "mezer = " << spaces << endl
	  << "znaku = " << total << endl
	  << "hvezd = " << stars;
	return 0;
}
