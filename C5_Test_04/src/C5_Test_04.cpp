//=================================================================================================
// Name        : C5_Test_04.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Představte si že prodáváte knihu C++ pro každého, napište program, do kterého
//             : bude možné zadat měsíční prodeje za rok (v počtu knih ne v penězích). Program
//             : by měl v cyklu postupně vyzvat uživatele k zadání vstupu pomocí jmen měsíců
//             : získaných z pole typů char * inicializovaného řetězci se jmény měsíců. Vstupní
//             : data by program ukládal do pole typu int. Dále by vypočítal součet hodnot pole
//             : a zobrazil celkový prodej za rok.
//=================================================================================================
//             : zdrojový soubor se použije k vypracování pátého zadání.
//=================================================================================================

#include <iostream>
using namespace std;

//const int Year = 1;
const int Months = 12;

int main()
    {
        int sell = 0;
       int selling[Months];
        const char * months[Months] =
        	{
        		"Leden", "Unor", "Brezen", "Duben", "Kveten", "Cerven",
			"Cervenec", "Srpen", "Zari", "Rijen", "Listopad", "Prosinec"
        	};
	cout << "zadavejte hodnoty prodeju knih c++ pro kazdeho" << endl;
	for (int month = 0; month < Months; ++month)
	    {
	    cout << months[month] << " : ";
	    cin >> sell;
	    selling[month]= sell;

	    }
	    cout << endl;
	for (int month = 0; month < Months; ++month)
			{
			cout << months[month] << " : ";
			cout << selling[month] << endl;
			}
		    cout << endl;

	return 0;
    }
