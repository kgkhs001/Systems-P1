all: num grades leap

num: num.o 
	gcc num.o -o num  

num.o: num.c 
	gcc -c num.c  

leap: leap.o
	gcc leap.o -o leap

leap.o: leap.c
	gcc -c leap.c  
	
grades: grades.o calcGrades.o
	gcc grades.o calcGrades.o -o grades 

grades.o: grades.c calcGrades.h 
	gcc -c grades.c
	
calcGrades.o: calcGrades.c calcGrades.h
	gcc -c calcGrades.c

clean:
	rm -f num.o num grades.o grades calcGrades.o leap.o leap
