#pragma once
#include "GymExercise.h"
class Repo {
	private:
		GymExercise exercitii[20];
		int n;
		
	public:
		Repo();
		~Repo();
		Repo(int n);
		Repo(const Repo& r);
		void addGymExercise(GymExercise g);
		GymExercise* getAll();
		int findElem(GymExercise g);
		GymExercise getItemFromPos(int);
		int getSize();
		void delElem1(int);
		void updateElem1(int i, char* n, int, int, float);
		

};
