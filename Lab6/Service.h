#pragma once
#include "GymExercise.h"
#include "Repo.h"
#include<stack>
class Service {
	private:
	Repo r;
	stack <vector<GymExercise>> s; 
	stack <vector<GymExercise>> s1;
	public:
		void addGymExercise(GymExercise g);
		void deleteGymExercise(int);
		void updateGymExercise(int,char* , int,int,float);
		int getSize();
		vector<GymExercise> showGymExercises();
		void filterGymExercisesX(int , vector<GymExercise> &result);
		void filterAndDelete();
		void addListInStack(vector<GymExercise> lista);
		void undo();
		int sizeStack();
		void addListInStackRedo(vector<GymExercise> lista);
		void redo();
		int sizeStackRedo();
		



		

};
