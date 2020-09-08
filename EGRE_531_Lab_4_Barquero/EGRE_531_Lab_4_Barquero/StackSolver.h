/*
 * StackSolver.h
 *
 * This is the stack solver for SUDOKU game.
 *
 */

#ifndef STACKSOLVER_H_
#define STACKSOLVER_H_

#include "SudokuGrid.h"
#include "Solver.h"


/*
 * A simple stack class for SUDOKU slots
 */
class SlotStack {
private:
	Slot data[81];
	int stack_top;

public:
	SlotStack() {stack_top = -1;};
	~SlotStack() {};

	Slot pop() {stack_top--; return data[stack_top+1];};

	void push(Slot s) {stack_top++; data[stack_top] = s;};

	Slot top() {return data[stack_top];};

	int stack_size() {return stack_top + 1;};

	bool is_empty() {return stack_top < 0;};
};

class StackSolver:public Solver {
private:
	SlotStack ss;		// Stack to store slots that are filled

public:
	StackSolver();
	~StackSolver();

	void solve();
};

#endif /* STACKSOLVER_H_ */
