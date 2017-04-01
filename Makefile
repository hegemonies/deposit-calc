all: deposit-calc deposit_test

deposit-calc: build/main.o build/deposit.o
	gcc -Wall -Werror -o bin/deposit-calc build/main.o build/deposit.o

build/deposit.o: src/deposit.c src/deposit.h
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o

build/main.o: src/main.c src/deposit.h
	gcc -Wall -Werror -c src/main.c -o build/main.o


deposit_test: build/deposit.o build/test/deposit_test.o build/test/main.o build/test/validation_test.o
	gcc -Wall -Werror -I/src/deposit.h -I/thirdparty/ctest.h -c build/test/main.o build/test/validation_test.o build/test/deposit_test.o -o bin/deposit_test

build/test/deposit_test.o: test/deposit_test.c
	gcc -Wall -Werror -I src/ thirdparty/ -c test/deposit_test.c -o build/test/deposit_test.o

build/test/validation_test.o: test/validation_test.c
	gcc -Wall -Werror -I src/ -I thirdparty/ -c test/validation_test.c -o build/test/validation_test.o

build/test/main.o: test/main.c build/test/deposit_test.o build/test/validation_test.o
	gcc -Wall -Werror -I thirdparty/ -c test/main.c -o build/test/main.o

.PHONY : clean

clean:
	rm -rf build/*.o bin/*