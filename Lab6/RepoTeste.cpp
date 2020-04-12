#include "RepoTeste.h"
#include "Repo.h"
#include<assert.h>
#include<iostream>

void testAdd()
{
	Repo r;
	assert( r.getSize() == 0);
	GymExercise g("haltere", 3, 3, 2);
	r.addGymExercise(g);
	assert(r.getSize() == 1);
		
}
void testGetAll()
{
	Repo r;
	assert(r.getSize()== 0);
	vector<GymExercise> exercitii;
	GymExercise g1("haltere", 3, 3, 2);
	GymExercise g2("gangtere", 4, 2, 3.5);
	r.addGymExercise(g1);
	r.addGymExercise(g2);
	exercitii=r.getAll();
	assert(r.getSize() == 2);
	GymExercise g3;
	GymExercise g4;
	g3 = g1;
	g4 = g2;
	assert(exercitii[0] == g3);
	assert(exercitii[1] == g4);
	

}

void testeConstructor()
{
	GymExercise g1("gangtere", 4, 2, 3.5);
	GymExercise g2 = g1;		//copy constructor
	GymExercise g3;			//implicit constructor
	g3 = g2;
	assert(g3 == g2);         // assign op or implicit assign op beacuse memebr data are of elementary type = > a new ob
	
	
}

void testDelete()
{
	Repo r;
	vector<GymExercise> exercitii;
	GymExercise g1("haltere", 3, 3, 2);
	GymExercise g2("gangtere", 4, 2, 3.5);
	r.addGymExercise(g1);
	r.addGymExercise(g2);
	r.delElem(0);
	assert(r.getSize() == 1);
	exercitii = r.getAll();
	assert(exercitii[0] == g2);
	
}
void testUpdate()
{
	Repo r;
	vector<GymExercise> exercitii;
	GymExercise g1("haltere", 3, 3, 2);
	GymExercise g2("gangtere", 4, 2, 3.5);
	r.addGymExercise(g1);
	r.addGymExercise(g2);
	r.updateElem(0,(char*)"bara",3,3,2);
	GymExercise g3((char*)"bara", 3, 3, 2);
	exercitii = r.getAll();
	assert(exercitii[0] == g3);
	


}

