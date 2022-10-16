run: main.o definitions.o
	g++ -o run.out main.cpp definitions.cpp

main.o: main.cpp
	g++ -c main.cpp

definitions.o: definitions.cpp
	g++ -c definitions.cpp

clean: 
	rm *.o *.out