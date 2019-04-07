#include<iostream>
using std::cout;
using std::endl;

int main()
{
	int furlong = 0;
	const int yard = 220;
	int yards = 0;
	cout << "Kolik furlongu ? " << endl;
	std::cin >> furlong;
	yards = furlong * yard;
	cout << "PREVEDENO NA YARDY " << yards << endl;
	cout << "KONEC" << endl;
	return 0;
}
