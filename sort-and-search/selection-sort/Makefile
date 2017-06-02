CC = gcc
CFLAGS = -I.
TARGET = selectionsort
DEPS = selectionsort.h
OBJ = main.o selectionsort.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)

.PHONY: clean

