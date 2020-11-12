
all:maind mains myMathd myMaths 

mains: main.o libmyMath.a
	gcc -Wall -g -o mains main.o libmyMath.a

maind: main.o libmyMath.so
	gcc -Wall -g -o maind main.o ./libmyMath.so

myMaths:libmyMath.a

libmyMath.a: pawer.o BasicMath.o
	ar -rcs libmyMath.a pawer.o BasicMath.o 

myMathd:libmyMath.so

libmyMath.so: pawer.o BasicMath.o myMath.h	
	gcc -shared -o libmyMath.so pawer.o BasicMath.o 

main.o: main.c
	gcc -Wall -g -c main.c

pawer.o: pawer.c myMath.h
	gcc -Wall -g -c pawer.c

BasicMath.o: BasicMath.c myMath.h
	gcc -Wall -g -c BasicMath.c

.PHONY: clean all mymaths mymathd

clean: 
	rm -f *.o *.a *.so maind mains 
