#pragma once

#include <vector>
#include "Puzzle.h"
#include "SudokuFitness.h"

using namespace std;

class Sudoku : public Puzzle
{
private:
	void outputHelper(ostream& out) const override;
	void inputHelper(istream& in) override;

	SudokuFitness fitness_;
	vector<vector<int>> grid_;

public:
	void setFit(int) override;
	int getFit() override;
};

