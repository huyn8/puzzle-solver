#pragma once
#include "Reproduction.h"
#include "Sudoku.h"

using namespace std;

class SudokuOffSpring : public Reproduction
{
public:
	Reproduction makeOffSpring(Puzzle&) override;
	void mutate(Puzzle&, int) override;
};

