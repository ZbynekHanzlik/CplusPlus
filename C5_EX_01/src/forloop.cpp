//============================================================================
// Name        : kapitola5_cykly_a_relacni_operatory.cpp
// Author      : Revan
// Version     :
// Copyright   : Your copyright notice
// Description : úvod do cyklu for
//============================================================================
//
//
/*
 * okolnosti často vyžadují aby program prováděl opakující
 * se úkoly, jako je například sečtení prvků pole jeden podruhém
 * nebo vytištění textu opopěvujícího produktivitu 20*.
 * Cyklus for jazyka C++ provádění takovýchto úkolů velmi
 * zjednodušuje Podívejme se na cyklus v tomto krátkém programu.
 * (výpis 5.1) nejprve zde zjistíme, co vlastně dělá a poté vysvětlíme jak pracuje
 */
#include <iostream>
using namespace std;

int main()
{
	int i;
	// inicializace test aktualizace
	for(i = 0; i < 5; i++)
	cout << "vypisuji text cislo " << i << "\n" <<  endl;
	cout << "konec cyklu.";
	return 0;
}
/* očekávaný výstup bude
 *  vypisuji text cislo 0
	vypisuji text cislo 1
	vypisuji text cislo 2
	vypisuji text cislo 3
	vypisuji text cislo 4
 */


/* Cyklus začíná nastavením celočíselné proměnné i na hodnotu 0.
 *
 * i = 0
 *
 * tomu se říká inicializace cyklu.  Poté v testu program zjišťuje, zda je hodnota
 * proměnné i menší než 5
 * jestliže je pravda že i < 5 pak provede následující příkaz, uvnitř bloku kterému říkáme tělo cyklu
 * cout << "vypisuji text cislo " << i << "\n" << endl;
 * Následně je prostřednictvím aktualizace cyklu zvýšena hodnota proměnné i o 1
 * i++
 * Inkrementace " i "  zakončuje první průchod cyklem.
*/
