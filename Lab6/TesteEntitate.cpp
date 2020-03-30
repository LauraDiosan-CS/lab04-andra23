#include "Teste.h"
#include "GymExercise.h"
#include<iostream>
#include<assert.h>
using namespace std;
void teste() {
	GymExercise g1("bara", 1, 4, 3);
	g1.setName("haltera");
	char* nume;
	nume=g1.getName();
	assert(g1.getName()==nume);
	g1.setNoOfReps(3);
	assert(g1.getNoOfReps() == 3);
	g1.setNoOfSeries(2);
	assert(g1.getNoOfSeries() == 2);
	g1.setWeightKg(5);
	assert(g1.getWeightKg() == 5);
	GymExercise g2 = g1;                      //copy constructor
	GymExercise g3;			                 //implicit constructor
	g3 = g2;
	assert(g3 == g2);
	                                        //assign op or implicit assign op beacuse memebr data are of elementary type => a new ob
				                            //(implicit) assign op => self assign


}
