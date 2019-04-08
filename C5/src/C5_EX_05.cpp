//============================================================================
// Name        : C5_EX_05.cpp
// Author      : Revan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
using namespace std;

int main()
    {
    int my_integer = 256;
    int someInt = 252;
    short my_short;
    long my_long;
    float my_float;
    double my_double;
    bool boolean = static_cast<bool>(someInt);
    my_short = (short)my_integer;
    my_long = my_short * 10000;
    my_float = my_long + 0.785;
    my_double = (double)my_float / 10000;
    cout << boolean << endl;
    cout << my_double << endl;
    int arr[] = {1,2,3,4};
    for(auto& i : arr)
	{
	cout << "i " << i << " arr[i] += arr[i+2] ";
	arr[i] += 2;
	cout << "arr[i] " << arr[i] << endl;
	}

    array<int, 3> ars = {4,5,6};
    cout << "arrray size " << ars.size()<< endl;
    for(auto i : ars)
	{
	cout << i << endl;
	}
    }
