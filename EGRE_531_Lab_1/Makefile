Lab   : main.o Functions.o Lab1.h
	g++ -o Lab main.o Functions.o
	
main.o : main.cpp Lab1.h
	g++ -c -o main.o main.cpp
	
Functions.o : Functions.cpp Lab1.h
	g++ -c -o Functions.o Functions.cpp
	
clean : 
	rm -f *.o
	rm -f *.exe
	