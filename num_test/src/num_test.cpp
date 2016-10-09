/*
 * num_test.cpp
 *  -- použití numerického testu v cyklu for
 *  Created on: 5. 7. 2016
 *      Author: AnubW
 */

#include <iostream>
int main(int argc, char *argv[])
{
	using namespace std;

	cout << "zadejte celociselnou hodnotu pro odpocet\n->";
	int limit;
	cin >> limit;
	int i;
	for(i = limit; i; i--)
		cout << "i = " << i <<  "\n";
	cout << "Hotovo nyni je i = " << i << endl;
	return 0;
}
