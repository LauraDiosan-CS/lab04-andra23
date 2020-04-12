#include<iostream>
#include "GymExercise.h"
#include "Service.h"
#include<stack>
void Service::addGymExercise(GymExercise g){
	vector<GymExercise> lista;
	lista = showGymExercises();
	addListInStack(lista);
	r.addGymExercise(g);
}
vector<GymExercise> Service::showGymExercises(){

	return r.getAll();
}
void Service::deleteGymExercise( int i) {
	vector<GymExercise> lista;
	lista = showGymExercises();
	addListInStack(lista);

	r.delElem(i);
}
int Service::getSize(){

	return r.getSize();
}

void Service::updateGymExercise(int it, char* nume, int noOfSeries, int noOfReps, float weightKg) {
	vector<GymExercise> lista;
	lista = showGymExercises();
	addListInStack(lista);

	r.updateElem(it, nume, noOfSeries,  noOfReps,  weightKg);
}

void  Service::filterGymExercisesX(int x, vector<GymExercise> &result) {
	
	for (int i = 0; i < r.getSize(); i++)
	{
		GymExercise exercitiu = r.getItemFromPos(i);

		if ((exercitiu.getNoOfSeries() * exercitiu.getNoOfReps() * exercitiu.getWeightKg()) > x) {

				result.push_back(r.getItemFromPos(i));
		}
	}
}

void Service::filterAndDelete() {
	vector<GymExercise> lista;
	lista = showGymExercises();
	addListInStack(lista);
	
	for (int i = 0; i < r.getSize(); i++) {
		GymExercise exercitiu = r.getItemFromPos(i);
		if ((exercitiu.getNoOfReps() * exercitiu.getWeightKg()) < 5)
			r.delElem(i);
	}
}
void Service:: addListInStack( vector<GymExercise> lista) {
	//for (int i = 0; i < lista.size(); i++)
		//cout << lista[i];
	s.push(lista);
}
void Service::undo()
{
	vector<GymExercise> lista1;
	lista1 = showGymExercises();
	addListInStackRedo(lista1);

	if (s.size() != 0) {
		vector<GymExercise> lista;
		lista = s.top();
		s.pop();
		r.clearVector();
		for (int i = 0; i < lista.size(); i++)
			r.addGymExercise(lista[i]);
	}
	
}
int Service:: sizeStack() {
	return s.size();
}
void Service::addListInStackRedo(vector<GymExercise> lista) {
	s1.push(lista);
}
void::Service::redo() {
	vector<GymExercise> lista;
	lista = showGymExercises();
	addListInStack(lista);

	if (s1.size() != 0) {
		vector<GymExercise> lista;
		lista = s1.top();
		s1.pop();
		r.clearVector();
		for (int i = 0; i < lista.size(); i++)
			r.addGymExercise(lista[i]);
	}
}
int Service::sizeStackRedo() {
	return s1.size();
}







