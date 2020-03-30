#include<iostream>
#include "Aplicatie.h"
#include "Service.h"
#include<stack>
void Service::addAplicatieManagement(AplicatieManagement a) {
	
	r.addAplicatieManagement(a);
}
vector<AplicatieManagement> Service::showAplicatiiManagement() {

	return r.getAll();
}

int Service::getSize() {

	return r.getSize();
}

