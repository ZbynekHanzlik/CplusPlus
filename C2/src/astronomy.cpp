#include <iostream>

double convertAU(double ay);

int main()
{
	double svetelnyRok;
	std::cout << "zadejte vzdalenost ve svetelnych letech:";
	std::cin >> svetelnyRok;
	std::cout << svetelnyRok << " Svetelnych let je " << convertAU(svetelnyRok) << " astronomickzch jednotek.";
	return 0;
}

double convertAU(double ay)
{
	const int AU = 63240;
	double result = ay * AU;
	return result;
}
