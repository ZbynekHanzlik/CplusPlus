#pragma once
#include <iostream>
#include <string>
class Account
{
private:
	std::string jmeno;
	long cisloUctu;
	float zustatek;

public:
	Account();
	Account(const std::string s = "null", long an = -1, float bal = 0.0);
	~Account();

	void ZobrazZustatek() const;
	void Vybrat(float amt);
	void Vlozit(float amt);
	float Zustatek() const;

};

