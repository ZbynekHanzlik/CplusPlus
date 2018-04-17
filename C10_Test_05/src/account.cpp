#include "..\account.hpp"

Account::Account()
{
	jmeno = "null";
	cisloUctu = 0;
	zustatek = 0.0f;
}

Account::Account(const std::string s, long an, float bal)
{
	jmeno = s;
	cisloUctu = an;
	zustatek = bal;
}

Account::~Account()
{
}

void Account::ZobrazZustatek() const
{
}

void Account::Vybrat(float amt)
{
	if (amt < 0)
	{

	}
	else if (amt > zustatek)
	{

	}
	else
		amt -= zustatek;
}

void Account::Vlozit(float amt)
{
	if (amt <= 0.0f)
	{
		amt = 0.0f;
		std::cout << "vlozeno " << amt << std::endl;
	}
	else
		zustatek += amt;
}

float Account::Zustatek() const
{
	return zustatek;
}
