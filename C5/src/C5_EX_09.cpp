//============================================================================
// Name        : C5_EX_09.cpp
// Author      : Revan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;
//const int array_size = 20;
int main()
    {
	cout << "zadejte slovo max 20 znaku" << endl;
	string word;
	string word1;
	cin >> word;
	word1 = word;


	char temp;
	int i,j;
	for(j = 0, i = word.size()-1; j < i; --i, ++j)
	    {
	    temp = word[i];
	    word[i] = word[j];
	    word[j] = temp;
	    }
        if(word1 == word)
            {
	   std::cout << word << " is palyndrome" << endl;
            }
        else
        {
	cout << word << " is not palyndrome" << endl; // prints
        }
	return 0;
    }
