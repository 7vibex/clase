// clase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include "Masina.h"
#include "cont_bancar.h"
#include <vector>
#include "GameServer.h"
using namespace std;
class dateOfBirth
{
private:
	int dayOfBirth;
	int yearOfBirth;
	std::string MonthOfBirth;
public:
	dateOfBirth()
	{
		dayOfBirth = 0;
		yearOfBirth = 0;
		MonthOfBirth = "";
	}
	dateOfBirth(int dayOfBirth,int yearOfBirth,std::string MonthOfBirth)
	{
		this->dayOfBirth = dayOfBirth;
		this->yearOfBirth = yearOfBirth;
		this->MonthOfBirth = MonthOfBirth;
	}
	int calculateAge()
	{
		std::cout << "Age is " << "To do" << std::endl;

	}
	void printDateOfBirth()
	{
		std::cout << "Day" << dayOfBirth << "Month" << MonthOfBirth << "year" << yearOfBirth << std::endl;
	}
};
class Persoana
{
public:
	int varsta;
	std::string Nume;
public:
	Persoana(std::string nume, int age,int dayOfBirth,int yearOfBirth ,std::string MonthOfBirth)
	{
		this->Nume = Nume;
		this->varsta = varsta;
		m_date_of_birth = dateOfBirth(dayOfBirth,yearOfBirth,MonthOfBirth);
	}
	void prinInfo()
	{
		std::cout << "Salut ma cheama " << Nume << "si am " << varsta << "ani\n";
		m_date_of_birth.printDateOfBirth();
	}

	dateOfBirth m_date_of_birth;
	
	
};

class myClass
{
private:
	int my_var  ;
	std::string my_string;
public:
	myClass()//constructor

	{
		std::cout << "Un obiect my_class a fost creat \n";
		my_var = 10;
		my_string = "myClass";
	}
	myClass(int var, std::string input_string)
	{
		my_var = var;
		my_string = input_string;
	}


	~myClass()
	{
		std::cout << "Un obiect my_Class a fost distrus\n";
	}
	
	
	void printData()
	{ 
		std::cout << "Val lui my var este " << my_var<<std::endl;
		std::cout << "Val lui my string este " <<my_string<< std::endl;
	}

};

class masina {
private:
	std::string marca;
	std::string model;
	int viteza_max;
	int viteza_curenta;
	int accelerar;
public:
	

	 masina(std::string marca,std::string model,int viteza_max,int viteza_curenta,int accelerar)
	{
		this->marca = marca;
			this->model = model;
			this->viteza_curenta = viteza_curenta;
			this->viteza_max = viteza_max;
			this->accelerar = accelerar;



	}




		void accelera() {
		

			if (accelerar > -1 && accelerar < viteza_max) {
			
				while ( true) {
					if (viteza_curenta < viteza_max) {
						std::cout << "viteza curenta este: " << viteza_curenta << "km/h" << std::endl;
						std::cout << "Introdu acceleratia:\n ";
						std::cin >> accelerar;
						viteza_curenta += accelerar;

					}

					else {

						std::cout << "Viteza curenta este mai mare decat  viteza maxima,Introdu  o valoare diferita  " << std::endl;
						viteza_curenta -= accelerar;
						std::cin >> accelerar;
						viteza_curenta += accelerar;

					}

					
					
					if (!accelerar) {
						std::cout << "Input invalid. Oprim programul..." << std::endl;

						std::cin.clear();
						std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
						break;
					}
						
						
				

				}
			}
			else {
				std::cout << "Viteza de accelerare este invalida" << std::endl;
			}
		}


		void franare()
		{
			viteza_curenta = 0;
			std::cout<<"Viteza curenta este:" << viteza_curenta <<"km/h" << std::endl;
		}

		void afisareInfo()
		{
			std::cout << "Marca masini este " << marca << std::endl;
			std::cout << "Marca modelul este " << model << std::endl;
		}
		void functie_switch()
		{
			std::cout << " Introdu marca : " << std::endl;
			std::cin >> marca;
			std::cout << " Introdu model: " << std::endl;
			std::cin >> model;
			std::cout << " Introdu viteza curenta " << std::endl;
			std::cin >> viteza_curenta;
			std::cout << " Introdu maxima " << std::endl;
			std::cin >> viteza_max;
			if (viteza_curenta < viteza_max)
			{

			}
			else {
				std::cout << "Viteza maxima este mai mare ca viteza curenta\n";
			}
			int optiune;
			cout << "Alege o opțiune:\n";
			cout << "1. Optiunea 1 : Accelerare\n";
			cout << "2. Optiunea 2: Franare\n";
			
			cin >> optiune;

			switch (optiune) {
			case 1:
				cout << "Ai ales optiunea 1 Accelerare .\n";
				accelera();
				
			case 2:
				cout << "Ai ales optiunea 2 Franare .\n";
				franare();
				break;
			
			default:
				cout << "Opțiune invalidă.\n";
			}

		
		
		
		
		}
};






class Carte {
private:
	int carti;
	std::string titlu;
	std::string autor;
	int pagcit;
public:
	Carte(std::string titlu ,std::string autor, int pagcit, int  carti) {
		this->titlu = titlu;
		this->autor = autor;
		this->pagcit = pagcit;
		this->carti = carti;
	}
	void cartea()

	{

		std::cout << "Catee carti ai citit?" << std::endl;
		cin >> carti;
		for (int i = 0; i < carti; i++) {
		
			cout << "Introdu titlul cartii " << i + 1 << ": ";
			cin.ignore();
			getline(cin, titlu);

			cout << "Introdu autorul cartii " << i + 1 << ": ";
			getline(cin, autor);

			cout << "Introdu numarul de pagini citite pentru cartea " << i + 1 << ": ";
			cin >> pagcit;

		
		}

	}


	


};

class jurnal {


private:
	std::vector <Carte> cartii;
public:
};











int main()
{

	GameServer server_1(5,10);
	server_1.printServerInfo();
	myClass obj;
	
	obj.printData();
	//inca un mod de a creea obiecte in c++
	myClass obj2=myClass(45,"Obiectul2");
	obj2.printData();

	Persoana p1 = Persoana("Sergiu,", 22, 14, 1991, "June");



	p1.Nume = "Marius";
	p1.varsta = 25;
	p1.prinInfo();
	
	masina m1 = masina("", "",1 ,0, 0);
	
	m1.functie_switch();
	m1.afisareInfo();
	/*Masina m;
	m.an_fabricat = 2023;
	m.numar_locuri = 5;
	m.model = "SSangYong";
	m.printCarInfo();
	m.acelereaza();

	ContBancar c1;
	
	c1.printInfoCont();
	c1.initcont();
	c1.depunereSuma(1000);
	c1.printInfoCont();*/



}

