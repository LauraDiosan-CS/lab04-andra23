#include "Aplicatie.h"
#include"Repo.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>
using namespace std;

AplicatieManagement::AplicatieManagement() {
	//cout << "const implicit";
	this->name = NULL;
	this->consumMemorieKb = 0;
	this->status = NULL;
	
}
AplicatieManagement::AplicatieManagement(const char* name, int consumMemorieKb,const  char* status) {
	//cout << "constructor with param" << endl;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->consumMemorieKb = consumMemorieKb;
	this->status = new char[strlen(status) + 1];
	strcpy_s(this->status, strlen(status) + 1, status);
	
}
AplicatieManagement::AplicatieManagement(const AplicatieManagement& a) {
	//cout << "copy constructor" << endl;
	this->name = new char[strlen(a.name) + 1];
	strcpy_s(this->name, strlen(a.name) + 1, a.name);
	this->consumMemorieKb = a.consumMemorieKb;
	this->status = new char[strlen(a.status) + 1];
	strcpy_s(this->status, strlen(a.status) + 1, a.status);
	
}

AplicatieManagement::~AplicatieManagement() {
	//cout << "Destructor";
	if (this->name) {
		delete[] this->name;
		this->name = NULL;
	}
	consumMemorieKb = 0;
	if (this->status) {
		delete[] this->status;
		this->status = NULL;
	}

}
char* AplicatieManagement::getName() {
	return this->name;
}
int AplicatieManagement::getConsumMemorieKb() {
	return this->consumMemorieKb;
}
char* AplicatieManagement::getStatus() {
	return this->status;
}

void AplicatieManagement::setName(const char* name) {
	if (this->name) {
		delete[] this->name;
	}
	this->name = new char[strlen(name) + 1];

	strcpy_s(this->name, strlen(name) + 1, name);


}
void AplicatieManagement::setConsumMemorieKb(int consumMemorieKb) {
	this->consumMemorieKb = consumMemorieKb;
}


void AplicatieManagement::setStatus(const char* status) {
	if (this->status) {
		delete[] this->status;
	}
	this->status = new char[strlen(status) + 1];

	strcpy_s(this->status, strlen(status) + 1, status);


}

AplicatieManagement& AplicatieManagement::operator=(const AplicatieManagement& a) {
	this->setName(a.name);
	this->setConsumMemorieKb(a.consumMemorieKb);
	this->setStatus(a.status);
	
	return *this;
}

bool AplicatieManagement::operator==(const AplicatieManagement& a) {
	return (strcmp(this->name, a.name) == 0) && (this->consumMemorieKb == a.consumMemorieKb) && (strcmp(this->status, a.status) == 0);
}
ostream& operator<<(ostream& os, const AplicatieManagement& a)
{
	os << a.name << " " << a.consumMemorieKb << " " << a.status;
	return os;
}


