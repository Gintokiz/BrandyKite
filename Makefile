CC = gcc
CFLAGS = -Wall -g -I./header #For warnings and debug in the gcc command implementation + header files
SRC = src/main.c src/lists.c
OBJ = build/main.o build/lists.o #Converts all .c in SRC into .o, then save them in OBJ the target
EXEC = bin/main.exe

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

build/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build/*.o $(EXEC)