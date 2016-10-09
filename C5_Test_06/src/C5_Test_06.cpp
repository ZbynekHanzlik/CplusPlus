//============================================================================
// Name        : C5_Test_06.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct car
    {
    std::string type;
    int rok;
    };
int main() {
	cout << "zadejte pocet aut :" << endl;
	int pocet;
	(cin >> pocet).get();
	car *ai = new car [pocet];
	for(int i = 0; i < pocet; ++i)
	    {
	    cout << (i + 1) << " ";
	    cout << "znacka auta" << endl;
	    getline(cin,ai[i].type);
	    cout << "rok vyroby " << endl;
	    (cin >> ai[i].rok).get();
	    }

	for (int i=0; i < pocet; i++)
	    cout << ai[i].rok << " " << ai[i].type << endl;
delete [] ai;
	return 0;
}
