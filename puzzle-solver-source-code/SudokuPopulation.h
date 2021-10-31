#pragma once
#include "Population.h"
#include "Sudoku.h"

using namespace std;
class SudokuPopulation : public Population
{
public:
	void createOrginalPopulation(Puzzle&) override;
	void createNewGen() override;
	int bestFit() override;
	Puzzle bestIndividual() override;
	void cull() override;
};

