// C10_Test_05.cpp: Definuje vstupní bod pro aplikaci konzoly.
//
#include <iostream>
#include "../account.hpp"
int main()
{
	Account A("rrr", 10221, 200);
	A.Vlozit(10);
	A.Vybrat(300);
	A.Vybrat(123);
	float balance = A.Zustatek();
	std::cout << balance << std::endl;
	char ch;
	std::cin >> ch;


    return 0;
}

