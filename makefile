all: ls cat cp


romwriter: romwriter.o
	gcc -g romwriter.o



util.o: util.c util.h
	gcc -c util.c

deque.o: deque.c deque.h
	gcc -g -c deque.c

echo.o: echo.c
	gcc -g -c echo.c

echo: echo.o deque.o
	gcc -g echo.o deque.o -o echo.bin

ls.o: ls.c 
	gcc -c -g ls.c 

ls: ls.o util.o
	gcc ls.o util.o -o ls.bin

cat.o: cat.c
	gcc -g -c cat.c

cat: cat.o util.o
	gcc -g cat.o util.o -o cat.bin


cp.o: cp.c
	gcc -g -c cp.c

cp: cp.o util.o
	gcc cp.o util.o -o cp.bin

clean:
	rm *.bin
	rm *.o
