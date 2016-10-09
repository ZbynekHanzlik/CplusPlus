//============================================================================
// Name        : C6_Test_01.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cctype>
int main()
    {
        char znaky;
	std::cin >> znaky;
	while(znaky != '@')
	    {
	    if(isalpha(znaky))
		{
		if(islower(znaky))
		    {
		    std::cout << (char)toupper(znaky);
		    }
		else
		    {

		    std::cout << (char)tolower(znaky);
		    }
		}
	    else
		{
		std::cout << std::flush;
		}
	       std::cin >> znaky;
	       }

	//return 0;
    }
