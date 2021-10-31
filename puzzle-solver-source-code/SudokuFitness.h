#pragma once
#include "Fitness.h"
#include "Puzzle.h"
#include "Sudoku.h"

using namespace std;

class SudokuFitness : public Fitness
{
private:
	int scanRow(Sudoku&);
	int scanColumn(Sudoku&);
	int scanBlock(Sudoku&);

public:
	int howFit(const Puzzle&) const override;
};

