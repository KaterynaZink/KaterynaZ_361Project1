CC = gcc
CFLAGS = -Wall -Werror -g

slist: main.o helper.o

	$(CC) $(CFLAGS) -o slist main.o helper.o //Assisted by Copilot. Prompt: "How to compile main.o and helper.o into an executable named slist using gcc with flags"

main.o: main.c helper.h
	$(CC) $(CFLAGS) -c main.c

helper.o: helper.c helper.h
	$(CC) $(CFLAGS) -c helper.c

clean:
	rm -f slist main.o helper.o