
output: main.o parking.o
	gcc main.o parking.o -o output 

main.o: main.c
	gcc -c main.c

parking.o: parking.c parking.h
	gcc -c parking.c

clean:
	rm *.o output
