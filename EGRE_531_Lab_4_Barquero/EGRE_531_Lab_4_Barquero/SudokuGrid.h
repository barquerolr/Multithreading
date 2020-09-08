/*
 * SudokuGrid.h
 *
 * SUDOKU grid data structure and basic operations
 *
 */

#ifndef SUDOKUGRID_H_
#define SUDOKUGRID_H_

#include <string>

using namespace std;

class Slot {
public:
	int row;
	int column;
};


class SudokuGrid {
private:
	int * grid;				// 9x9 grid
	Slot empty_slots[81];	// Empty slots which are going to be filled
	int slot_number;		// Number of Empty slots

public:
	SudokuGrid();
	~SudokuGrid();

	int read_problem(string file);					// Read a game from file
	void print_grid();								// Print grid in fine format
	int get_slot_number();							// Return empty slot number
	int get_digit(int row, int column);				// Return a digit at given position
	void set_digit(int row, int column, int digit);	// Set the digit at given position
	Slot get_empty_slot(int count);					// Return a position in the grid to be filled
};

#endif /* SUDOKUGRID_H_ */
