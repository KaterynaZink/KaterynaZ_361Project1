CC = gcc
CFLAGS = -Wall -Werror -g

slist: main.o helper.o

	$(CC) $(CFLAGS) -o slist main.o helper.o 

main.o: main.c helper.h
	$(CC) $(CFLAGS) -c main.c

helper.o: helper.c helper.h
	$(CC) $(CFLAGS) -c helper.c

clean:
	rm -f slist main.o helper.o