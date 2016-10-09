//===============================================================================================
// Name        : C5_Test_03.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Daphne investuje 100 Kč na jednoduchý úrok 10 % To znamená že její investice
//             : vzroste každý rok o 10% původní investice, neboli každý rok o 10 Kč
//             :
//             : úrok = 0.10 * původní zůstatek
//             :
//             : Ve stejnou dobu investuje Cleo 100 Kč na složený úrok 5 % To znamená, že úrok
//             : je 5 % z běnžho zůstatku včetně předchozího přírůstku úroku:
//             :
//             : úrok = 0.05 * běžný zůstatek
//             :
//             : Cleo vydělá 5 % ze 100 Kč první rok, což znamená, že bude mít 105 Kč. Další rok
//             : 5 % ze 105 Kč, tedy 5.25 Kč atd. Napište program, Který zjistí, za kolik let
//             : Cleina investice předstihne Daphninu a potom zobrazte hodnoty obou investic v té
//             : době
//================================================================================================

#include <iostream>
using namespace std;

int main()
    {
 const double const_i = 0.1;
 const double const_j = 0.05;
 const int begin = 1000;
 double i,j;
 int rok = 0;
	for(i = begin,j=begin; i >= j; i+=const_i,j+=const_j)
	    {
	    j += (0.05 * j);
	    i += (0.1 * begin);
	    ++rok;
	    cout  << j << " vs " << i << endl;
	    }
	cout << "-------------" << endl;
cout << j << ' ' << i<< endl;
cout <<" trvalo to " << rok << " let";
	return 0;
    }

