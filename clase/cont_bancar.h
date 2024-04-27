#include<string>
#include<iostream>
class ContBancar
{
	//o clasa este private by default
public:
	std::string nume_utilizator;
	std::string prenume_utilizator;
	float sold = 0;
public:
	void printInfoCont();
	void initcont();
	bool depunereSuma(int suma);
	void retragereSuma(int retragere);
	

};