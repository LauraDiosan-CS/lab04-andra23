// Lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "GymExercise.h"
#include "Operations.h"
#include "Repo.h"
#include "Teste.h"
#include "RepoTeste.h"
using namespace std;
void  display() {
	std::cout << "\n";
	std::cout << "********** Main Menu **********" << std::endl;
	std::cout << "Alegeti o optiune: " << std::endl;
	std::cout << "(1): Adaugare exercitiu." << std::endl;
	std::cout << "(2): Afisare exercitii." << std::endl;
	std::cout << "(3): Stergere exercitiu." << std::endl;
	std::cout << " (4): Modificare exercitiu." << std::endl;
	std::cout << "(5):  Exit." << std::endl;
}
void PrintMenu()
{
	char name[10];
	int noOfSeries = {}, noOfReps = {};
	float weightKg = {};
	Repo r;
	int opt;
	do {
		display();
		while (true) {

			cin >> opt;
			if (opt == 1) {
				cout << "\n Introduceti numele: ";
				cin >> name;
				cout << " Introduceti nr.de serii: ";
				cin >> noOfSeries;
				cout << " Introduceti nr. de repetari:  ";
				cin >> noOfReps;
				cout << " Introduceti greutatea: ";
				cin >> weightKg;
				cout << endl;

				GymExercise g(name, noOfSeries, noOfReps, weightKg);
				r.addGymExercise(g);
				
				break;
			}
			if (opt == 2) {
				for (int i = 0; i <r.getSize(); i++)
				{
					cout << "Nume: " << r.getAll()[i].getName() << endl;
					cout << "Nr.de serii: " << r.getAll()[i].getNoOfSeries() << endl;
					cout << "Nr.de repetari: " << r.getAll()[i].getNoOfReps() << endl;
					cout << " Greutatea:  " << r.getAll()[i].getWeightKg() << endl;
					cout << "-------------------------------" << endl;
				}
				break;

			}
			if (opt == 3)
			{
				int elem;
				cout << "elem:";
				cin >> elem;
				r.delElem1(elem);
				break;
			}
			if (opt == 4)
			{
				int elem;
				
				
					cout << "Dati pozitia elementului pe care doriti sa-l modificati:  ";
					cin >> elem;
					if (elem < r.getSize()) {
						cout << "\n Update exercitiu: ";
						cout << "\n Introduceti numele: ";
						cin >> name;
						cout << " Introduceti nr.de serii: ";
						cin >> noOfSeries;
						cout << " Introduceti nr. de repetari:  ";
						cin >> noOfReps;
						cout << " Introduceti greutatea: ";
						cin >> weightKg;
						cout << endl;

						r.updateElem1(elem, name, noOfSeries, noOfReps, weightKg);
					}
					else cout << "Elemenul dat nu exista";
				break;
			}
			if (opt == 5)
				exit(0);
			else
				if (opt != 1 && opt != 2 && opt != 3 && opt!=4 && opt!=5)
					cout << "ERROR!You have selected an invalid choice.";

		}
	} while (opt!=5);
}

int main()
{
	teste();
	testAdd();
	testGetAll();
	testeConstructor();
	testDelete();
	testUpdate();
	PrintMenu();
}



