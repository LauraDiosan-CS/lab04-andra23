#include "Teste.h"
#include "GymExercise.h"
void teste() {
	GymExercise g1;	                            //implicit constructor
	GymExercise g1((char*)"bara",1,4,3)   
	g1.setName("haltera");
	assert(g1.getName() == "haltera";
	g1.setNoOfSeries(3);
	assert(g1.getNoOfReps() == 3);
	g1.setNoOfReps(2);
	assert(g1.getNoOfSeries() == 2);
	g1.setWeightKg(5);
	assert(g1.getWeightKg() == 5);

	GymExercise g2 = g1;		//copy constructor
	GymExercise g3;			//implicit constructor
	assert (g3 = g2);			//assign op or implicit assign op beacuse memebr data are of elementary type => a new ob
	assert(g1 = g1);			//(implicit) assign op => self assign

}

