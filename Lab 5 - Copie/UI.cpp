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
	std::cout << "(7):  UNDO." << std::endl;
	std::cout << "(8):  REDO." << std::endl;
	std::cout << "(9):  Exit." << std::endl;
}
void UI::PrintMenu()
{
	int ok = 1;
	char name[10];
	int noOfSeries = {}, noOfReps = {}, x, len = 0;
	float weightKg = {};
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
		s.addGymExercise(g);
		break;
	}
	if (opt == 2) {
		for (int i = 0; i < s.dim(); i++)
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
		if (elem < s.dim()) {

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
		if (elem < s.dim()) {
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
		GymExercise result[20];
		cout << "X= "; cin >> x;
		s.filterGymExercisesX(x, result, len);
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
		GymExercise result[20];
		s.filterAndDelete();
		break;

	}
	if (opt == 7) {
		//UNDO
	}
	if (opt == 8) {
		//REDO
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

	} while (opt != 9 );
}



