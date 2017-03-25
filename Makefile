all: deposit-calc

deposit-calc: build/main.o build/deposit.o
	gcc -o bin/deposit-calc build/main.o build/deposit.o

build/deposit.o: src/deposit.c src/deposit.h
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

.PHONY : clean 

clean:
	rm -rf build/*.o