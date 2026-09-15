slist: main.o helper.o
	gcc -o slist main.o helper.o

main.o: main.c helper.h
	gcc -c main.c

helper.o: helper.c helper.h
	gcc -c helper.c

clean:
	rm -f slist main.o helper.o