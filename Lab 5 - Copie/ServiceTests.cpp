#include "ServiceTests.h"
#include "Service.h"
#include<iostream>
#include<assert.h>
Service s;
void testAddGymExercise() {
	
	assert(s.dim() == 0);
	GymExercise g1((char*)"haltere", 2, 3, 2);
	s.addGymExercise(g1);
	assert(s.dim() == 1);
	assert(*s.showGymExercises() == g1);
	
}

void testDeleteGymExercise() {
	assert(s.dim() == 1);
	s.deleteGymExercise(0);
	assert(s.dim() == 0);
}
void testUpdateGymExercise() {
	assert(s.dim() == 0);
	GymExercise g1((char*)"haltere", 2, 3, 2);
	s.addGymExercise(g1);
	s.updateGymExercise(0, (char*)"gangtere", 2, 3, 2);
	GymExercise g2((char*)"gangtere", 2, 3, 2);
	assert(*s.showGymExercises() == g2);

}
void testFilterGymExercise() {
	GymExercise result[20];
	int len = 0;
	GymExercise g1((char*)"haltere", 4, 2, 2);
	GymExercise g2((char*)"bara", 1, 5, 6);
	GymExercise g3((char*)"gangtera", 7, 3, 2);
	s.addGymExercise(g1);
	s.addGymExercise(g2);
	s.addGymExercise(g3);
	s.filterGymExercisesX(20, result, len);
	assert((len == 2) && (result[0] == g2) && (result[1] == g3));
}
void testFilterAndDelete() {
	
	s.filterAndDelete();
	GymExercise g2((char*)"bara", 1, 5, 6);
	GymExercise g3((char*)"gangtera", 7, 3, 2);
	GymExercise g0((char*)"gangtere", 2, 3, 2);
	assert( (s.showGymExercises()[0] == g0) && (s.showGymExercises()[1] == g2) && (s.showGymExercises()[2] == g3));

}