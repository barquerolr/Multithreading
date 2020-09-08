/*
 * RecursiveSolver.h
 *
 * This is the recursive solver for the SUDOKU game
 *
 */

#ifndef RECURSIVESOLVER_H_
#define RECURSIVESOLVER_H_

#include "SudokuGrid.h"
#include "Solver.h"

class RecursiveSolver: public Solver {
public:
	RecursiveSolver();
	~RecursiveSolver();

	void solve(int count);		// Solve the game with recursive calling
};

#endif /* RECURSIVESOLVER_H_ */
