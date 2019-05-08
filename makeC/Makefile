
all : hello


hello.o : hello.c
	gcc -c hello.c

main.o : main.c hello.h
	gcc -c main.c

hello : hello.o main.o
	gcc -o hello hello.o main.o

clean : 
	rm *.o
	rm hello
