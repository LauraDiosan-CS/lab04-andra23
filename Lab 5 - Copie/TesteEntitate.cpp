#include "Teste.h"
#include "GymExercise.h"
#include<iostream>
using namespace std;
void teste() {
	GymExercise g1;	 //implicit constructor
	g1.setName((char*)"haltera");
	g1.setNoOfSeries(3);
	g1.setNoOfReps(2);
	g1.setWeightKg(5);

	GymExercise g2 = g1;  //copy constructor
	GymExercise g3;			//implicit constructor
	g3 = g2;			//assign op or implicit assign op beacuse memebr data are of elementary type => a new ob
	g1 = g1;			//(implicit) assign op => self assign
	cout << "Test passed \n";

}
