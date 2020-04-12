#include "ServiceTests.h"
#include "Service.h"
#include<iostream>
#include<assert.h>

void testAddGymExercise() {
	Service s;
	assert(s.getSize() == 0);
	GymExercise g1("haltere", 2, 3, 2);
	s.addGymExercise(g1);
	assert(s.getSize() == 1);
	assert(s.showGymExercises()[0] == g1);

}

void testDeleteGymExercise() {
	Service s;
	assert(s.getSize() == 0);
	GymExercise g1("haltere", 2, 3, 2);
	s.addGymExercise(g1);
	assert(s.getSize() == 1);
	s.deleteGymExercise(0);
	assert(s.getSize() == 0);

}

void testUpdateGymExercise() {
	Service s;
	assert(s.getSize() == 0);
	GymExercise g1("haltere", 2, 3, 2);
	s.addGymExercise(g1);
	s.updateGymExercise(0, (char*)"gangtere", 2, 3, 2);
	GymExercise g2((char*)"gangtere", 2, 3, 2);
	assert(s.showGymExercises()[0] == g2);

}
void testFilterGymExercise() {
	Service s;
	vector<GymExercise>result;
	GymExercise g1((char*)"haltere", 4, 2, 2);
	GymExercise g2((char*)"bara", 1, 5, 6);
	GymExercise g3((char*)"gangtera", 7, 3, 2);
	s.addGymExercise(g1);
	s.addGymExercise(g2);
	s.addGymExercise(g3);
	s.filterGymExercisesX(20, result);
	assert((result.size() == 2) && (result[0] == g2) && (result[1] == g3));
}

void testFilterAndDelete() {
	Service s;
	GymExercise g1((char*)"haltere", 4, 2, 2);
	GymExercise g2((char*)"bara", 1, 5, 6);
	GymExercise g3((char*)"gangtera", 7, 3, 2);
	s.addGymExercise(g1);
	s.addGymExercise(g2);
	s.addGymExercise(g3);
	s.filterAndDelete();
	GymExercise g4((char*)"bara", 1, 5, 6);
	GymExercise g5((char*)"gangtera", 7, 3, 2);
	assert((s.showGymExercises()[0] == g4) && (s.showGymExercises()[1] == g5));

}

void testUndoRedoAdd() {
	Service s;
	GymExercise g1((char*)"haltere", 4, 2, 2);
	s.addGymExercise(g1);
	assert(s.getSize() == 1);
	s.undo();
	assert(s.getSize() == 0);
	s.redo();
	assert(s.getSize() == 1);
	assert(s.showGymExercises()[0] == g1);
}

void testUndoRedoDelete() {
	Service s;
	GymExercise g1((char*)"haltere", 4, 2, 2);
	GymExercise g2((char*)"bara", 1, 5, 6);
	GymExercise g3((char*)"gangtera", 7, 3, 2);
	s.addGymExercise(g1);
	s.addGymExercise(g2);
	s.addGymExercise(g3);
	assert(s.getSize() == 3);
	s.deleteGymExercise(0);
	assert(s.getSize() == 2);
	assert(s.showGymExercises()[0] == g2 && s.showGymExercises()[1] == g3);
	s.undo();
	assert(s.getSize() == 3);
	assert(s.showGymExercises()[0] == g1 && s.showGymExercises()[1] == g2 && s.showGymExercises()[2] == g3);
	s.redo();
	assert(s.getSize() == 2);
	assert(s.showGymExercises()[0] == g2 && s.showGymExercises()[1] == g3);

}
void testUndoRedoUpdate() {
	Service s;
	GymExercise g1((char*)"haltere", 4, 2, 2);
	s.addGymExercise(g1);
	assert(s.getSize() == 1);
	s.updateGymExercise(0, (char*)"bara", 4, 2, 2);
	GymExercise g("bara", 4, 2, 2);
	assert(s.showGymExercises()[0] == g);
	s.undo();
	assert(s.showGymExercises()[0] == g1);
	s.redo();
	assert(s.showGymExercises()[0] == g);

}
void testUndoRedoFilter() {
	Service s;
	GymExercise g1((char*)"haltere", 4, 2, 2);
	GymExercise g2((char*)"bara", 1, 5, 6);
	GymExercise g3((char*)"gangtera", 7, 3, 2);
	s.addGymExercise(g1);
	s.addGymExercise(g2);
	s.addGymExercise(g3);
	s.filterAndDelete();
	assert(s.getSize() == 2);
	s.undo();
	assert(s.getSize() == 3);
	s.redo();
	assert(s.getSize() == 2);

}



