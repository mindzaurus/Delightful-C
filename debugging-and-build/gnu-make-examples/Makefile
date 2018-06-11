


clean:
	rm a.out *.o libadd.a

a.out: main.o libadd.a
	gcc -L. -ladd main.c

main.o: main.c
	gcc -c main.c

main.c: add.h add.c

libadd.a: add.o add.h
	ar rc libadd.a add.o

add.o: add.c
	gcc -c add.c


