#pragma once
#pragma once
#include "Aplicatie.h"
#include "Repo.h"
#include<stack>
class Service {
private:
	Repo r;
	stack <vector<AplicatieManagement>> s;
	stack <vector<AplicatieManagement>> s1;
public:
	void addAplicatieManagement(AplicatieManagement a);
	
	int getSize();
	vector<AplicatieManagement> showAplicatiiManagement();
	





};
