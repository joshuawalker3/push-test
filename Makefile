runMe.bin: main.o avg.o
	gcc  main.o avg.o -o runMe.bin
main.o: main.c avg.h
	gcc -Wall -c main.c
avg.o: avg.c avg.h
	gcc -Wall -c avg.c
clean:
	rm *.o runMe.bin
