//============================================================================
// Name        : C6_EX_06.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

const char* qualify[4] =
	{
		"1 pozice\n ",
		"2 pozice\n ",
		"3 pozice\n ",
		"4 pozice\n "

	};

int main()
    {
    using namespace std;
    int age = 0;
    cout << "zadejte vas vek v letech: ";
    cin >> age;
    int index;
    if (age > 17 && age < 35)
	index = 0;
    else if(age >= 35 && age < 50)
	index = 1;
    else if(age >= 50 && age < 65)
	index = 2;
    else
	index = 3;

    cout << "kvalifikoval jste se " << qualify[index];
	return 0;
    }
