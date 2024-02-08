CC=gcc
CFLAGS= -Wall -Wextra -pedantic
EXTERNAL=main.o server.o
output:$(EXTERNAL)
	$(CC) $(CFLAGS) $(EXTERNAL) -o $@
main.o:main.c
	$(CC) $(CFLAGS) -c $< -o $@
server.o:server.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(EXTERNAL)
