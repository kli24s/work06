all: work06.o
	gcc -o work06m work06.o

work06.o: work06.c
	gcc -c work06.c

run:
	./work06m

clean:
	rm *.o
	rm program
