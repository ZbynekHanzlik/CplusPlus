/*
 * index BMI	(Body Mass index)
 * 		1:	stopy a palce pouze na palce	   (vstup_stopa * 12) + palec;
 * 		2:   palce  * 0.0254; na metry
 * 		3:	vahu v librach jen na Kg / 2.2
 * 		4:	vaha * vyska na druhou
 */

#include <iostream>
#include <cmath>
int main()
{
	const double palec_na_metry = 0.0254;
	const int stopa_na_palec = 12;
	int vstup_stopy, vstup_palce;
	double vstup_libry;
	const double libry_na_kg = 2.2;
	std::cout << "zadejte vysku ve stopach a palcich _________ b\b\b\b\b\b\b\b\b\b\b";
	std::cin >> vstup_stopy >> vstup_palce;
	std::cout << "zadejte svou vahu v librach ___\b\b\b";
	std::cin >> vstup_libry;
	int stopy_celkem = (vstup_stopy * stopa_na_palec) + vstup_palce;
	double stopy_na_metry = palec_na_metry * stopy_celkem;
	double vaha_v_kg = vstup_libry / libry_na_kg;
	double BMI = vaha_v_kg * pow(stopy_na_metry, 2);
	std::cout << "index BMI = " << BMI;
	return 0;
}
