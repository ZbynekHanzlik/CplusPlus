//============================================================================
// Name        : C6_EX_05.cpp
// Author      : Revan
// Version     :
// Copyright   : Open Source
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
const int ArSize = 6;
int main()
	{
	using namespace std;
	float naaq[ArSize];
	cout << "zadejte KUNV (koeficient uvedomeni noveho veku) "
		<< "\nvasich sousedu. Program konci, "
		<< "kdyz provedete\n" << ArSize << " zadani "
		<< "nebo kdyz vlozite zapornou hodnotu.\n";
	int i = 0;
	float temp;
	cout << "prvni hodota: ";
	cin >> temp;
	while(i < ArSize && temp >= 0)
		{
		naaq[i] = temp;
		++i;
		if(i < ArSize)
			{
			cout << "dalsi hodnota: ";
			cin >> temp;
			}
		}
	if(i == 0)
		cout << "zadne udaje-sbohem\n";
	else
		{
		cout << "zadejte svuj KUNV: ";
		float you;
		cin >> you;
		int count = 0;
		int count1 = 0;
		int equal = 0;
		for(int j = 0; j < i; j++)
			{
			if(naaq[j] > you)
				++count;
			//count = naaq[j] > you ? naaq[j] : ++count;
			if(naaq[j] < you)
				++count1;
			if(naaq[j] == you)
				++equal;
			}
		if(count != 0)
			{
			cout << count;
			cout << " z vasich sousedu ma vetsi uvedomeni\n "
				<< " noveho veku, nez vy.\n";
			}

		if(count1 != 0)
			{
			cout << count1;
			cout << " z vasich sousedu maji nizsi uvedomeni noveho veku." << endl;
			}

		if(equal != 0)
			{
			cout << equal << " z vasich sousedu maji stejne uvedomeni jako vy." << endl;
			}
		}
	return 0;
	}

