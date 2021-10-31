#pragma once
#include "Puzzle.h"

using namespace std;

class Fitness
{
public:
	virtual int howFit(const Puzzle&) const = 0;
};