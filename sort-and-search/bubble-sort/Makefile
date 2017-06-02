CC = gcc
CFLAGS = -I.
TARGET = bubblesort
DEPS = bubblesort.h
OBJ = main.o bubblesort.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)

.PHONY: clean

