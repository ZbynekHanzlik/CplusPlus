//============================================================================
// Name        : C5_Test_05.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
 *                  example
 *                  seller[Year][Months] =
 *                  {
 *                    {2014}, // cisla jsou reprezentativni nepredstavuji skutecne hodnoty
 *                    {2015}, // misto roku se zde bude ukladat 12 hodnot do tri poli
 *                    {2016},
 *                  };
 */

#include <iostream>
using namespace std;

const int Year = 3;
const int Months = 12;

int main()
    {
        int sell = 0;
       int selling[Year][Months];
       int years[] =  {2014, 2015, 2016};
        const char * months[Months] =
        	{
        		"Leden", "Unor", "Brezen", "Duben", "Kveten", "Cerven",
			"Cervenec", "Srpen", "Zari", "Rijen", "Listopad", "Prosinec"
        	};
	cout << "zadavejte hodnoty prodeju knih c++ pro kazdeho" << endl;
	for (int year = 0; year < Year; ++year)
	    {
	    for(int month = 0; month < Months; ++month)
		{
		cout << months[month] << " : " << years[year] << " : ";
	    cin >> sell;
	    selling[year][month]= sell;
		}
	    }
	    cout << endl;
	for (int year = 0; year < Year; ++year)
			{
	    for(int month = 0; month < Months; ++month)
		{
			cout <<  months[month] << " : " <<years[year] << " : ";
			cout << selling[year][month] << endl;
		}
			}
		    cout << endl;

	return 0;
    }
