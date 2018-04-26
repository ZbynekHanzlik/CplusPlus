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
		std::cout << "nelze vybirat zapornou castku. Transakce ukoncena.\n";
	}
	else if (amt > zustatek)
	{
		std::cout << "Pozadovana castka je prislis vysoka. Transakce ukoincena.\n";
	}
	else
	{
		zustatek = zustatek - amt;
		std::cout << "Vyber " << amt << " zustatek " << Zustatek() << std::endl;
	}
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
