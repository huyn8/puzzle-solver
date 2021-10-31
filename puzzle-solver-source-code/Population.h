#pragma once
#include <vector>
#include "Puzzle.h"

using namespace std;

class Population
{
protected:
	int size_;
	vector<Puzzle> new_population_;
	vector<Puzzle> old_population_;

public:
	virtual void createOrginalPopulation(Puzzle&) = 0;
	virtual void createNewGen() = 0;
	virtual int bestFit() = 0;
	virtual Puzzle bestIndividual() = 0;
	virtual void cull() = 0;

	int getSize()
	{
		return this->size_;
	}

	void setSize(int newSize)
	{
		this->size_ = newSize;
	}
};