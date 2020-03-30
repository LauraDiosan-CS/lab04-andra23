#pragma once
#include "Aplicatie.h"
#include<vector>
class Repo {
private:
	vector<AplicatieManagement> elem;
public:
	Repo();
	~Repo();
	void addAplicatieManagement(AplicatieManagement);
	bool findElem(AplicatieManagement);
	int getSize();
	vector< AplicatieManagement> getAll(); };
