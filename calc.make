calculator.out: main.o
	g++ -o calculator.out main.o

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -f *.o *.out