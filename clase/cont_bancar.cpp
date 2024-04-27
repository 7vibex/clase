#include "cont_bancar.h"

void ContBancar::printInfoCont()
{
	
	std::cout << "Titularul cccontului" << nume_utilizator << "   " << prenume_utilizator << std::endl;
	std::cout << "Valoare sold : " << sold << std::endl;

}

void ContBancar::initcont()
{
	if (nume_utilizator.empty()) {

		std::cout << "Introduceti numele utilizatorului" << std::endl;
		std::cin >> nume_utilizator;
		std::cout << "Introduceti prenumele utilizatorului" << std::endl;
		std::cin >> prenume_utilizator;
		std::cout << "Introduceti soldul initial" << std::endl;
		std::cin >> sold;
	}
	else
	{
		std::cout<<"Eroare,Contul este deeeja initializat"<<std::endl;
	}
}

bool ContBancar::depunereSuma(int suma)
{
	if (sold > -1) {
	
		sold += suma;
		return true;
	}
	return false;
}

void ContBancar::retragereSuma(int retragere)
{
	if (retragere > -1) {
		sold -= retragere;
	}
	else { std::cout << "nu aveti bani suficienti in cont\n"; }
}
