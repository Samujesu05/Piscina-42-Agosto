CC=cc
CFLAGS= -Wall -Wextra -Werror

rush-02: numbers.dict rush-02.c rush_functions.o rush_functions2.o
	$(CC) $(CFLAGS) -o rush-02 rush-02.c rush_functions.o rush_functions2.o

rush_functions.o: rush_functions.c rush_functions.h
	$(CC) $(CFLAGS) -c rush_functions.c rush_functions.h

rush_functions2.o: rush_functions2.c rush_functions2.h
	$(CC) $(CFLAGS) -c rush_functions2.c rush_functions.h

clean:
	rm -f *.o

fclean: clean
	rm -f rush-02
