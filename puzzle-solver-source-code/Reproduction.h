#pragma once
#include "Puzzle.h"

using namespace std;

class Reproduction
{
protected:
	virtual void mutate(Puzzle&, int) = 0;

public:
	virtual Reproduction makeOffSpring(Puzzle&) = 0;
};