//============================================================================
// Name        : C5_Test_01.cpp
// Author      : Revan
// Version     : 0.2
// Copyright   : Open Source
// Description : výpočet mezivýsledku mezi čísly
//============================================================================

#include <iostream>
using namespace std;

int main()
    {
	int prvni, druhe, soucet = 0;
	cout << "zadejte prosim 2 cisla\n" << endl;
	cin >> prvni >> druhe;
	if(prvni > druhe) // kontrola
	    {
	   for(int i = prvni; i >= druhe; --i) // odpočet pomocí for
	       {
	       soucet = soucet + i;  // přičítání
	       }
	   cout << soucet;  // výpis výsledku
	    }
	else if(prvni < druhe)
	    {
	    for(int i = prvni; i <= druhe; ++i)// inkrementace neboco
	        {
	        soucet += i; // zas přičítám
	        }
	    cout << soucet;
	    }
	else
	    cout << (prvni + druhe); // prostě kontrola
	return 0;
    }
/* úkol splněn nad rámec funguje
 * i když je první číslo větší než druhé cha chá
 */
