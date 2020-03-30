#include "UI.h"
#include<iostream>


void UI::display() {
	std::cout << "\n";
	std::cout << "********** Main Menu **********" << std::endl;
	std::cout << "Alegeti o optiune: " << std::endl;
	std::cout << "(1): Adaugare exercitiu." << std::endl;
	std::cout << "(2): Afisare exercitii." << std::endl;
	std::cout << "(3): " << std::endl;
	std::cout << "(4): " << std::endl;
	std::cout << "(5): " << std::endl;
	std::cout << "(6): " << std::endl;
	std::cout << "(7): " << std::endl;
	std::cout << "(8): " << std::endl;
	std::cout << "(9): Exit." << std::endl;
}
void UI::PrintMenu()
{
	char name[10];
	int consumMemorieKb = {};
	char status[10];
	int opt;
	do {
		display();
		while (true) {

			cin >> opt;

	

			if (opt == 1) {

				cout << "\n Introduceti numele: ";
				cin >> name;
				cout << " Introduceti consum memorie (kb): ";
				cin >> consumMemorieKb;
				cout << " Introduceti status( ram, swap):  ";
				cin >> status;
				
				cout << endl;
				AplicatieManagement a(name,consumMemorieKb,status);
				s.addAplicatieManagement(a);
				break;
			}
			if (opt == 2) {

				for (int i = 0; i < s.getSize(); i++)
				{
					cout << "Nume: " << s.showAplicatiiManagement()[i].getName() << endl;
					cout << "Nr.de serii: " << s.showAplicatiiManagement()[i].getConsumMemorieKb() << endl;
					cout << "Nr.de repetari: " << s.showAplicatiiManagement()[i].getStatus() << endl;
					
					cout << "-------------------------------" << endl;
				}

				break;
			}
			if (opt == 3)
			{
				
				break;
			}

			if (opt == 4)
			{
				
				
				break;
			}
			if (opt == 5) {
				
			
				break;
			}
			if (opt == 6)
			{
				
				break;
			}
			if (opt == 7) {

				break;
				
			}
			if (opt == 8) {

				break;

			}
			if (opt == 9) {
				cout << "Exit.";
				exit(0);
			}

			if (opt != 1 && opt != 2 && opt != 3 && opt != 4 && opt != 5 && opt != 6 && opt != 7 && opt != 8 && opt != 9) {
				cout << "ERROR!You have selected an invalid choice.";
				break;

			}


		}

	} while (opt != 9);
}



