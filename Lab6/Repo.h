#pragma once
#include "GymExercise.h"
#include<vector>
class Repo {
	private:
		vector<GymExercise> elem;
		
	public:
		Repo();
		~Repo();
		void addGymExercise(GymExercise );
		bool findElem(GymExercise );
		void delElem(int);
		void updateElem(int, char* , int, int, float);
		GymExercise getItemFromPos(int);
		int getSize();
		vector< GymExercise> getAll();
		void clearVector();
		
		
		

};
