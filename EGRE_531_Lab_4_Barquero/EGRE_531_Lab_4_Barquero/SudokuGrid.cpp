/******************************************************************************************************************
Programmed by: Luis Barquero
Purpose: Program will read in a text file containing an unsolved Sudoku problem and it will recursively solve it.
 * SudokuGrid.cpp
 *
 *****************************************************************************************************************/

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include "SudokuGrid.h"

using namespace std;

/*
 * Initialize the grid and slot array
 */
SudokuGrid::SudokuGrid() {
	grid = new int[81];
	for (int i = 0; i < 81; i++) {
		grid[i] = 0;
		empty_slots[i].column = 0;
		empty_slots[i].row = 0;
	}
}

/*
 * Free memory
 */
SudokuGrid::~SudokuGrid() {
	delete[] grid;
}

/*
 * Return a digit at given position
 */
int SudokuGrid::get_digit(int row, int column) {
	return grid[row*9+column];
}

/*
 * Return empty slot number
 */
int SudokuGrid::get_slot_number() {
	return slot_number;
}

/*
 * Print the grid in fine format
 * Both problem and answer
 */
void SudokuGrid::print_grid() {
	int i, j;

	cout << endl;

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++)
			if (grid[i*9+j] == 0)
				cout << "- ";
			else
				cout << grid[i*9+j] << " ";
		cout << endl;
	}

}

/*
 * Read the game from a text file
 */
int SudokuGrid::read_problem(string file) {
	//TODO:complete reader from file.
	if (file == "") {
		cout << "No problem file!" << endl;
		return 0;
	}

	ifstream ifs(file.c_str());
	string line;
	int empty_slot = 0;
	char ch;

	if (ifs.is_open()) {
		for (int i = 0; i < 9; i++) {
			getline(ifs, line);

			if (line.length() < 17) {
				cout << "Invalid input file format!" << endl;
				return 0;
			}

			for (int j = 0; j < 9; j++) {
				ch = line[j*2];
				if (ch < '0' || ch > '9') {
					cout << "Invalid input value!" << endl;
					return 0;
				}
				set_digit(i, j, ch - '0');
				if (ch == '0') {
					empty_slots[empty_slot].row = i;
					empty_slots[empty_slot].column = j;
					empty_slot++;
				}
			}
		}
	}
	else {
		cout << "Failed to open file " << file << endl;
		return 0;
	}

	// Print problem first
	cout << "The problem to be solved is: " << endl;
	print_grid();
	cout << endl;

	slot_number = empty_slot;
	return empty_slot;
}

/*
 * Set a digit at given position
 */
void SudokuGrid::set_digit(int row, int column, int digit) {
	grid[row*9+column] = digit;
}


/*
 * Return a empty slot's position
 */
Slot SudokuGrid::get_empty_slot(int count) {
	return empty_slots[count];
}
