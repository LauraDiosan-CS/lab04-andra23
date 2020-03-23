#pragma once
#include "GymExercise.h"
#include "Repo.h"
class Service {
	private:
	Repo r;
	public:
		Service();
		Service(Repo r);
		Service(const Service& s);
		~Service();
	    void filterGymExercisesX( float , GymExercise result[], int& );
		void filterAndDelete();
		void addGymExercise(GymExercise g);
		GymExercise* showGymExercises( );
		void deleteGymExercise(int i);
		void updateGymExercise(int i,char*, int,int,float);
		int dim();
		//void undo();
		



		

};
