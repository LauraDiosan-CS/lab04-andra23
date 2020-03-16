#include "RepoTeste.h"
#include "Repo.h"
#include<assert.h>
#include<iostream>
Repo r;
void testAdd()
{   
	assert( r.getSize() == 0);
	GymExercise g((char*)"haltere", 3, 3, 2);
	r.addGymExercise(g);
	assert(r.getSize() == 1);
	cout << "Test passed \n";	
}
void testGetAll()
{
	GymExercise* exercitii;
	GymExercise g1((char*)"haltere", 3, 3, 2);
	GymExercise g2((char*)"gangtere", 4, 2, 3.5);
	r.addGymExercise(g2);
	r.addGymExercise(g1);
	exercitii=r.getAll();
	assert(r.getSize() == 3);
	GymExercise g3;
	GymExercise g4;
	g3 = g1;
	g4 = g2;
	assert(exercitii[0] == g3);
	assert(exercitii[1] == g4);
	cout << "Test passed \n";

}
void testeConstructor()
{
	GymExercise g1((char*)"gangtere", 4, 2, 3.5);
	GymExercise g2 = g1;		//copy constructor
	GymExercise g3;			//implicit constructor
	g3 = g2;			//assign op or implicit assign op beacuse memebr data are of elementary type => a new ob
	g1 = g1;
	cout << "Test passed \n";
}
void testDelete()
{
	GymExercise* exercitii;
	GymExercise g1((char*)"haltere", 3, 3, 2);
	GymExercise g2((char*)"gangtere", 4, 2, 3.5);
	r.delElem1(2);
	assert(r.getSize() == 2);
	exercitii = r.getAll();
	assert(exercitii[0] == g1);
	assert(exercitii[1] == g2);
	cout << "Test passed \n";
}
void testUpdate()
{
	GymExercise* exercitii;
	exercitii = r.getAll();
	GymExercise g2((char*)"bara", 3,3 , 2);
	GymExercise g1((char*)"haltere", 3, 3, 2);
	assert(exercitii[0] == g1);
	r.updateElem1(0,(char*)"bara",3,3,2);
	assert(exercitii[0] == g2);
	cout << "Test passed \n";


}
