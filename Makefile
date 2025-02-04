all: lab3 lab3array

lab3: lab3.cpp
	g++ lab3.cpp -Wall -o lab
lab3array: lab3array.cpp
	g++ lab3array.cpp -Wall -o lab3array

clean:
	rm -f lab3 lab3array
