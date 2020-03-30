#include "RepoTeste.h"
#include "Repo.h"
#include<assert.h>
#include<iostream>

void testAdd()
{
	Repo r;
	assert(r.getSize() == 0);
	AplicatieManagement a("ArgumentePRO",2000,"ram");
	r.addAplicatieManagement(a);
	assert(r.getSize() == 1);

}
void testGetAll()
{
	Repo r;
	assert(r.getSize() == 0);
	vector<AplicatieManagement> exercitii;
	AplicatieManagement a1("ArgumentePRO",2000,"ram");
	AplicatieManagement a2("MeisterTask", 3200, "swap");
	r.addAplicatieManagement(a1);
	r.addAplicatieManagement(a2);
	exercitii = r.getAll();
	assert(r.getSize() == 2);
	AplicatieManagement a3;
	AplicatieManagement a4;
	a3 = a1;
	a4 = a2;
	assert(exercitii[0] == a3);
	assert(exercitii[1] == a4);


}


