#pragma once
#include "Puzzle.h"
#include "Reproduction.h"

using namespace std;

class PuzzleFactory
{
	virtual Puzzle createPuzzle(Reproduction&) = 0;
};