// Lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include"ServiceTests.h"
#include "Teste.h"
#include "RepoTeste.h"
#include "UI.h"
using namespace std;

	
int main()
{
	UI u;
	teste();
	testAdd();
	testGetAll();
	testeConstructor();
	testDelete();
	testUpdate();
	testAddGymExercise();
	testDeleteGymExercise();
	testUpdateGymExercise();
	testFilterGymExercise();
	testFilterAndDelete();
	u.PrintMenu();
}



