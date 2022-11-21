FLAGS = -Wall -g

all: libclassloops.so libclassrec.so libclassrec.a libclassloops.a maindrec maindloop mains loopd recursived recursives loops

loops: libclassloops.a

recursives: libclassrec.a

recursived: libclassrec.so

loopd: libclassloops.so

mains: main.o libclassrec.a
	gcc $(FLAGS) -o mains main.o libclassrec.a

maindloop: main.o libclassloops.so
	gcc $(FLAGS) -o maindloop main.o ./libclassloops.so

maindrec: main.o  libclassrec.so
	gcc $(FLAGS) -o maindrec main.o ./libclassrec.so

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	gcc -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	gcc -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

main.o: main.c NumClass.h
	gcc $(FLAGS) -c main.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc $(FLAGS) -c advancedClassificationRecursion.c

basicClassification.o: basicClassification.c NumClass.h
	gcc $(FLAGS) -c basicClassification.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec

