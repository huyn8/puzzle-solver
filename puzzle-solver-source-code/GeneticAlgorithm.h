#pragma once
#include "Sudoku.h"
#include "SudokuPopulation.h"

using namespace std;

class GeneticAlgorithm
{
private:
	Sudoku original_sudoku_;
	Sudoku result_sudoku_;
	SudokuPopulation population_;
	int population_size_;
	int generation_number_;


public:
	void processSudoku(int, int);
	void printSudoku();
	int getResultFitness(Sudoku&);
};

