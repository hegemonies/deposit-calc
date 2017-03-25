all: deposit-calc

clean:
	rm -rf build/*.o
deposit-calc: main.o deposit.o
	gcc -o bin/deposit-calc build/main.o build/deposit.o
deposit.o: src/deposit.c src/deposit.h
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o
main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o
