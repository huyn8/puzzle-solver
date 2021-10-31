#pragma once
#include "PuzzleFactory.h"
#include "Sudoku.h"
#include "SudokuOffSpring.h"

using namespace std;

class SudokuFactory : PuzzleFactory
{
	Puzzle createPuzzle(Reproduction&) override;
};

