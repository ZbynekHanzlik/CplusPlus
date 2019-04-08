
#include <iostream>

int main(int argc, char* argv[])
{
	const int stopa = 12;
	int input_palec = 0;
	std::cout << "kolik palcu: ____\b\b\b\b";
	std::cin >> input_palec;
	int con_stopa = input_palec / stopa;
	int con_palec = input_palec % stopa;
	std::cout << con_palec << " palcu " << con_stopa << " stop";
	return 0;
}
