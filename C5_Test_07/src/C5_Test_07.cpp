//============================================================================
// Name        : C5_Test_07.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

int main()
    {
    char slovo[80];
    char konec[] = "hotovo";
    char nic[] = "konec";
    int pocet_slov = 0;
    cout << " Vlozte nekolik slov do konzole pro ukonceni napiste (hotovo)\n";
    cin >> slovo;
    while(strcmp(slovo,konec)!=0)
	{
	cin >> slovo;
	    pocet_slov++;

	}
    cout << endl <<"pocet slov ve vete je " << pocet_slov;
	return 0;
    }
