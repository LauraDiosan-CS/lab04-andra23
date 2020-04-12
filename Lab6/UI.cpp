#include "UI.h"
#include<iostream>


void UI::display() {
	std::cout << "\n";
	std::cout << "********** Main Menu **********" << std::endl;
	std::cout << "Alegeti o optiune: " << std::endl;
	std::cout << "(1): Adaugare exercitiu." << std::endl;
	std::cout << "(2): Afisare exercitii." << std::endl;
	std::cout << "(3): Stergere exercitiu." << std::endl;
	std::cout << "(4): Modificare exercitiu." << std::endl;
	std::cout << "(5): Identificarea exercitiilor care  au noOfSeries * noOfReps * weightKg > X." << std::endl;
	std::cout << "(6): Eliminarea exercitiilor care au weightKg * noOfReps  < 5" << std::endl;
	std::cout << "(7): UNDO" << std::endl;
	std::cout << "(8): REDO" << std::endl;
	std::cout << "(9): Exit." << std::endl;
}
void UI::PrintMenu()
{
	char name[10];
	int noOfSeries = {}, noOfReps = {}, x;
	float weightKg = {};
	int opt;
	do {
		display();
		while (true) {

			cin >> opt;

			GymExercise g1("haltere", 3, 4, 1);
			GymExercise g2("gangtere", 2, 2, 4);
			GymExercise g3("flotari", 3, 2, 2);
			s.addGymExercise(g1);
			s.addGymExercise(g2);
			s.addGymExercise(g3);

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
				s.addGymExercise(g);
				break;
			}
			if (opt == 2) {

				for (int i = 0; i < s.getSize(); i++)
				{
					cout << "Nume: " << s.showGymExercises()[i].getName() << endl;
					cout << "Nr.de serii: " << s.showGymExercises()[i].getNoOfSeries() << endl;
					cout << "Nr.de repetari: " << s.showGymExercises()[i].getNoOfReps() << endl;
					cout << " Greutatea:  " << s.showGymExercises()[i].getWeightKg() << endl;
					cout << "-------------------------------" << endl;
				}

				break;
			}
			if (opt == 3)
			{
				int elem;
				cout << "Dati pozitia elementului pe care doriti sa-l stergeti: ";
				cin >> elem;

				if (elem < s.getSize()) {

					s.deleteGymExercise(elem);
				}
				else cout << "Elementul dat nu exista.";
				break;
			}

			if (opt == 4)
			{
				int elem;
				cout << "Dati pozitia elementului pe care doriti sa-l modificati:  ";
				cin >> elem;
				if (elem < s.getSize()) {
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
					s.updateGymExercise(elem, name, noOfSeries, noOfReps, weightKg);
				}
				else cout << "Elemenul dat nu exista";
				break;
			}
			if (opt == 5) {
				vector<GymExercise> result;
				cout << "X= "; cin >> x;
				s.filterGymExercisesX(x, result);
				int len = result.size();
				for (int i = 0; i < len; i++) {
					cout << "Nume: " << result[i].getName() << endl;
					cout << "Nr.de serii: " << result[i].getNoOfSeries() << endl;
					cout << "Nr.de repetari: " << result[i].getNoOfReps() << endl;
					cout << " Greutatea:  " << result[i].getWeightKg() << endl;
					cout << "-------------------------------" << endl;
				}
				break;
			}
			if (opt == 6)
			{
				s.filterAndDelete();
				break;
			}
			if (opt == 7) {

				if (s.sizeStack()!= 0)
					s.undo();
				else
					cout << "UNDO STOP.";
			}
			if (opt == 8) {

				if (s.sizeStackRedo() != 0)
					s.redo();
				else
					cout << "REDO STOP.";

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



