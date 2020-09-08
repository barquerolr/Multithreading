Sudoku 				: Sudoku.o RecursiveSolver.o StackSolver.o SudokuGrid.o Solver.h RecursiveSolver.h StackSolver.h SudokuGrid.h
			   g++ -o Sudoku Sudoku.o RecursiveSolver.o StackSolver.o SudokuGrid.o -fopenmp

Sudoku.o			: Sudoku.cpp RecursiveSolver.h StackSolver.h
			g++ -c -o Sudoku.o Sudoku.cpp -fopenmp
	
RecursiveSolver.o	: RecursiveSolver.cpp RecursiveSolver.h
			g++ -c -o RecursiveSolver.o RecursiveSolver.cpp -fopenmp
			
StackSolver.o 		: StackSolver.cpp StackSolver.h
			g++ -c -o StackSolver.o StackSolver.cpp -fopenmp
					  
SudokuGrid.o		: SudokuGrid.cpp SudokuGrid.h
			g++ -c -o SudokuGrid.o SudokuGrid.cpp -fopenmp
			
clean 				: 
	rm -f *.o
	rm -f *.exe
	