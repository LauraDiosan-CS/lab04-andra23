#include"Repo.h"
#include<iostream>
#include <cstddef>


Repo::Repo() {
}
Repo::~Repo() {
}
void Repo::addAplicatieManagement(AplicatieManagement a) {

	elem.push_back(a);
}

bool Repo::findElem(AplicatieManagement a) {

	vector<AplicatieManagement>::iterator it;
	it = find(elem.begin(), elem.end(), a);
	if (it != elem.end()) return true;
	return false;
}

int Repo::getSize() {

	return elem.size();
}
vector<AplicatieManagement> Repo::getAll() {

	return elem;
}










