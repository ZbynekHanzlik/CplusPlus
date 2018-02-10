//============================================================================
// Name        : C5_EX_20.cpp
// Author      : Revan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//=======================================================================

#include <iostream>
const int Cities = 5;
const int Years = 4;
using namespace std;

int main()
    {
	const char* cities[Cities] = // pole ukazatelu
		{
			"Brno",
			"Praha",
			"Veseli nad Moravou",
			"Pardubice"
		};

	int maxtemps[Years][Cities] = // 2D pole
		{
			{ 20, 18, 32,  9, 28},
			{  5,  2, 16, 24, 32},
			{ 19, 29, 31, 26, 17},
			{  3,  9,  8, 19, 21}
		};

	cout << "Maximalni teploty v letech 2013 - 2016\n\n";
	for(int city = 0; city < Cities; ++city)
	    {
	    cout << cities[city] << ":\t";
	    for (int year = 0; year < Years; ++year)
		{
		cout << maxtemps[year][city] << "\t";
		}
	    cout << endl;
	    }
	return 0;
    }
