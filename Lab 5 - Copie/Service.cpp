#include<iostream>
#include "GymExercise.h"
#include "Service.h"


Service::Service() {
	Repo r;

}
Service::Service(Repo r1) {
	r = r1;
}

Service::Service(const Service& s) {
	r= s.r;
}

Service::~Service() {
	r = NULL;
}
void Service::addGymExercise(GymExercise g)
{
	
	r.addGymExercise(g);
}
GymExercise* Service::showGymExercises()
{
	
	return r.getAll();
}
void Service::deleteGymExercise(int i) {
	r.delElem1(i);

}
int Service::dim()
{
	return r.getSize();
}
void Service::updateGymExercise(int i, char* nume, int noOfSeries, int noOfReps, float weightKg) {

	r.updateElem1( i, nume, noOfSeries,  noOfReps,  weightKg);
}

void  Service::filterGymExercisesX(float x, GymExercise result[], int& len) {
	
	for (int i = 0; i < r.getSize(); i++)
	{
		GymExercise exercitiu = r.getItemFromPos(i);
		

		if ((exercitiu.getNoOfSeries() * exercitiu.getNoOfReps() * exercitiu.getWeightKg()) > x) {

			result[len++] = exercitiu;
		}
	}
}

void Service::filterAndDelete() {
	
	for (int i = 0; i < r.getSize(); i++) {
		GymExercise exercitiu = r.getItemFromPos(i);
		if ((exercitiu.getNoOfReps() * exercitiu.getWeightKg()) < 5)
			r.delElem1(i);
	}
}







