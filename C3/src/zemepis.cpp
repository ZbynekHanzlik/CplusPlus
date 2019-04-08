#include <iostream>
#include <string>
#include <set>
#include <locale>
using namespace std;
int main()
{
	locale loc("Czech_Czech Republic.1250");
	locale::global(loc);
	const double Minutes_to_degree = 1 / 60.0;
	const double Seconds_to_degree = 1 / 3600.0;

	cout << "Zadejte zemìpisnou šíøku ve stupních, minutách a vteøinách:" << endl;
	cout << "Nejdøíve stupnì: ";
	int degrees;
	cin >> degrees;
	cout << "Dále úhlové minuty: ";
	int minutes;
	cin >> minutes;
	cout << "Nakonec úhlové vteøiny: ";
	int seconds;
	cin >> seconds;
	cout << degrees << " stupòù, " << minutes << " minut, " << seconds << " vteøin = ";
	cout << degrees + minutes * Minutes_to_degree + seconds * Seconds_to_degree << " stupòù." << endl;

}
