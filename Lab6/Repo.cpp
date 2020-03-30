#include"Repo.h"
#include<iostream>
#include <cstddef>


Repo::Repo() {
}
Repo::~Repo() {
}
void Repo::addGymExercise(GymExercise g) {

	elem.push_back(g);
}

bool Repo::findElem(GymExercise g) {

	vector<GymExercise>::iterator it;
	it = find(elem.begin(), elem.end(), g);
	if (it != elem.end()) return true;
	return false;
}
void Repo::delElem(int i) {

	elem.erase(elem.begin() +i);

	
}
void Repo::updateElem(int it, char* nume, int noOfSeries, int noOfReps, float weightKg) {

	for (int i = 0; i < elem.size(); i++)
		if (i==it)
		{
			elem[i].setName(nume);
			elem[i].setNoOfSeries(noOfSeries);
			elem[i].setNoOfReps(noOfReps);
			elem[i].setWeightKg(weightKg);
			return;
		}
}
GymExercise Repo::getItemFromPos(int i) {

	return elem[i];
}
int Repo::getSize() {

	return elem.size();
}
vector<GymExercise> Repo::getAll() {

	return elem;
}
void Repo:: clearVector() {
	elem.clear();
}









