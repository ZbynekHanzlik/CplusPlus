#include<iostream>

int main()
{
	double fahrenheit = 0.0;
	const double mult = 1.8;
	const double  plusCelsius = 32.0;
	double celsius = 0.0;
	std::cout << "Zadejet Hodnotu ve stupnich celsia\n";
	std::cin >> celsius;
	fahrenheit = mult * celsius + plusCelsius;
	std::cout << celsius << " stupnu Celsia je " << fahrenheit << " Stupnu fahrenheita!" << std::endl;
	return 0;
}
