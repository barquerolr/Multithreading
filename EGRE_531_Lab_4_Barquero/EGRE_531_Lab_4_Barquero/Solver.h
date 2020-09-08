/*
 * Solver.h
 *
 * This is the base solver class for SUDOKU game
 * Providing basic CHECK functions
 *
 */

#ifndef SOLVER_H_
#define SOLVER_H_
#include <time.h>
#include <string>

using namespace std;

class Solver {
protected:
	SudokuGrid grid;

public:
	bool solved;

public:
	Solver() {
		solved = false;
	};

	~Solver() {

	};


	/*
	 * Read a game from file
	 */
	int read_problem(string filename) {
		return grid.read_problem(filename);
	};

	/*
	 * Check a row in the grid for a slot
	 */
	bool check_row(Slot s) {
		int i;
		bool r = true;

		for (i = 0; i < 9; i++)
			if (i != s.row)
				if (grid.get_digit(s.row, s.column) == grid.get_digit(i, s.column))
					r = false;

		return r;
	};

	/*
	 * Check a column in the grid for a slot
	 */
	bool check_column(Slot s) {
		int i;
		bool r = true;

		for (i = 0; i < 9; i++)
			if (i != s.column)
				if (grid.get_digit(s.row, s.column) == grid.get_digit(s.row, i))
					r = false;

		return r;
	};

	/*
	 * Check a 3x3 block in the grid for a slot
	 */
	bool check_block(Slot s) {
		int left, upper;
		int i, j;
		bool r = true;

		upper = 3 * (s.row / 3);
		left = 3 * (s.column / 3);

		for (i = upper; i < upper + 3; i++)
			for (j = left; j < left + 3; j++)
				if (i != s.row || j != s.column)
					if (grid.get_digit(i,j) == grid.get_digit(s.row, s.column))
						r = false;

		return r;
	};

	/*
	 * Check all possible conflicts in the grid for a slot
	 */
	bool check(Slot s) {
		return check_row(s) && check_column(s) && check_block(s);
	};
};


#endif /* SOLVER_H_ */
