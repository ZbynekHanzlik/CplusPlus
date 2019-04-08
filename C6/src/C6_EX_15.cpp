//============================================================================
// Name        : C6_EX_15.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <cstdlib>
#include <iostream>
#include <fstream>
//#include <ifstream>
//#include <ofstream>
using namespace std;
 const int SIZE = 60;
 template <typename T>
 inline T const& Max(T const& a, T const& b)
     {
     return a > b ? a : b;
     }
int main()
    {

	char filename[SIZE];
	char automobile[50];
	int year;
	//register int_fast8_t uniqueNumber = 64;
	double a_price;
        double d_price;
        int i = 39;
            int j = 20;
            cout << "Max(i, j): " << Max(i, j) << endl;

            double f1 = 13.5;
            double f2 = 20.7;
            cout << "Max(f1, f2): " << Max(f1, f2) << endl;

            string s1 = "Hello";
string s2 = "World";
            cout << "Max(s1, s2): " << Max(s1, s2) << endl;


        cout << endl;
	ofstream fout;
	fout.open("carinfo.txt");
	ifstream fin;
	cout << "zadejte vyrobce a model automobilu.\n";
	cin.getline(automobile,50);
	cout << "zadejte rok vyroby.\n";
	cin >> year;
	cout << "zadejte puvodni pozadovanou cenu.\n";
	cin >> a_price;
	d_price = 0.913 * a_price;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "vyrobce a model " << automobile << endl;
	cout << "rok " << year << endl;
	cout << "puvodni cena $ " << a_price << endl;
	cout << "nynejsi cena $ " << d_price << endl;

	fout << fixed;
	fout.precision(2);
	fout.setf(ios_base::showpoint);
	fout << "vyrobce a model " << automobile << endl;
	fout << "rok " << year << endl;
	fout << "puvodni cena $ " << a_price << endl;
	fout << "nynejsi cena $ " << d_price << endl;
	fout.close();
	cout << "zadej jmeno datoveho souboru" << endl;
	cin.getline(filename, SIZE);
	fin.open(filename,ios_base::in);
	if(!fin.is_open())
	    {
	    cerr << "nepodarilo se otevrit soubor " << filename
		    << " program zde konci.\n";
	    exit(EXIT_FAILURE);
	    }

			fin >> fixed;
			fin.precision(2);
			fin.setf(ios_base::showpoint);
			//fin << fixed;
		    	fin.precision(2);
		    	fin >> automobile;
		    	fin >>  year;
		    	fin >> a_price;
		    	//fin >> d_price;


		fin.close();
	return 0;
    }
