#include <iostream>
void showTime(short h, short m)
{
	std::cout << "Time: " << h << ":" << m << std::endl;
}
int main()
{
	short minuty = 0, hodiny = 0;
	std::cout << "Enter the number of hours: ";
	std::cin >> hodiny;
	if (hodiny > 12 || hodiny < 0)
	{
		std::cerr << "neplatna hodnota konec! ";
		return EXIT_FAILURE;
	}
	std::cout << "Enter the number of minutes: ";
	std::cin >> minuty;
	if (minuty >= 60 || minuty < 0)
	{
		std::cerr << "neplatna hodnota konec! ";
		return EXIT_FAILURE;
	}
	else
		showTime(hodiny, minuty);
	return 0;
}
