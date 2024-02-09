CC := gcc
CFLAGS := -Wall -Wextra -pedantic
EXTERNAL := main.o server.o errorHandling.o
output:$(EXTERNAL)
	$(CC) $(CFLAGS) $(EXTERNAL) -o $@
main.o:main.c
	$(CC) $(CFLAGS) -c $< -o $@
server.o:server.c
	$(CC) $(CFLAGS) -c $< -o $@
errorHandling.o:errorHandling.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(EXTERNAL) output
