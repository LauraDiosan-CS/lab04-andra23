#include "GymExercise.h"
#include"Repo.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>
using namespace std;

GymExercise::GymExercise() {
	//cout << "const implicit";
	this->name = NULL;
	this->noOfSeries = 0;
	this->noOfReps = 0;
	this->weightKg = 0;
}
GymExercise::GymExercise(char* name, int noOfSeries, int noOfReps, float weightKg) {
	//cout << "constructor with param" << endl;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name)+1, name);
	this->noOfSeries = noOfSeries;
	this->noOfReps = noOfReps;
	this->weightKg = weightKg;
}
GymExercise::GymExercise(const GymExercise &g) {
	//cout << "copy constructor" << endl;
	this->name = new char[strlen(g.name) + 1];
	strcpy_s(this->name, strlen(g.name)+1, g.name);
	this->noOfSeries = g.noOfSeries;
	this->noOfReps = g.noOfReps;
	this->weightKg = g.weightKg;
}

GymExercise::~GymExercise() {
	//cout << "Destructor";
	if (this->name) {
		delete[] this->name;
		this->name = NULL;
	}
		noOfSeries = 0;
		noOfReps = 0;
		weightKg = 0;
	
}
char* GymExercise::getName() {
	return this->name;
}
int GymExercise::getNoOfSeries() {
	return this->noOfSeries;
}
int GymExercise::getNoOfReps() {
	return this->noOfReps;
}
float GymExercise::getWeightKg() {
	return this->weightKg;
}
void GymExercise::setName(char* name) {
	if (this->name) {
		delete[] this->name;
	}
	this->name = new char[strlen(name) + 1];

	strcpy_s(this->name, strlen(name) + 1, name);
	

}
void GymExercise::setNoOfSeries(int noOfSeries) {
	this->noOfSeries = noOfSeries;
}
void GymExercise::setNoOfReps(int noOfReps) {
	this->noOfReps = noOfReps;

}
void GymExercise::setWeightKg(float weightKg) {
	this->weightKg = weightKg;
}
GymExercise& GymExercise::operator=(const GymExercise& g) {
	this->setName(g.name);
	this->setNoOfSeries(g.noOfSeries);
	this->setNoOfReps(g.noOfReps);
	this->setWeightKg(g.weightKg);
	return *this;
}
bool GymExercise:: operator==(const GymExercise &g) {
	return (strcmp(this->name,g.name) == 0) && (this->noOfSeries==g.noOfSeries) && ( this->noOfReps==g.noOfReps) && ( this->weightKg==g.weightKg);
}
ostream& operator<<(ostream& os, const GymExercise& g)
{
	os << g.name << " " << g.noOfSeries << " " << g.noOfReps << " " << g.weightKg;
	return os;
}










