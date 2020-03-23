#include"Repo.h"
#include<iostream>
#include <cstddef>

Repo::Repo() {
	this->n = 0;

}
Repo::Repo(int n) {
	this->n = n;

}
Repo::Repo(const Repo& r) {
	
	this->n = r.n;
}
Repo::~Repo() {
	this->n = 0;


}
void Repo::addGymExercise(GymExercise g) {
	this->exercitii[this->n++] = g;
}
GymExercise* Repo::getAll() {
	return exercitii;
	

}
int Repo::findElem(GymExercise g) {
	int i = 0;
	

	while (i < this->n) {

		if (exercitii[i] == g) return i;

	}return -1;
}
GymExercise Repo::getItemFromPos(int i) {

	return exercitii[i];
	
}

int Repo::getSize() {
	return this->n;
}

void Repo::delElem1(int i) {
	if (i < n)
	{   for(int k=i;k<n-1;k++)
		exercitii[k] = exercitii[k+1];
		n--;
		
	}



}
void Repo::updateElem1(int i, char* nume, int noOfSeries, int noOfReps, float weightKg) {
		exercitii[i].setName(nume);
		exercitii[i].setNoOfSeries(noOfSeries);
		exercitii[i].setNoOfReps(noOfReps);
		exercitii[i].setWeightKg(weightKg);
	

}




