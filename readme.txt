Name of Program Developer: Krishna Garg

Programs

num.c ->
	What it does?
	num.c takes in an a single integer value (which is passed as a string) via an arguement passed using the command line, converts it to an integer and then states the value that was passed in
	
	How to Compile?
	This program is compiled in the makefile using:
		num.o: num.c 
			gcc -c num.c 
	
	Linking is done by:
		num: num.o 
			gcc num.o -o num
	How to use? 
	In the terminal type ./num some_integer_value
	
	
	Test Data:
	./num 5
	The number you entered was: 5
	
	./num 1000
	The number you entered was: 1000
	
	./num
	Must enter a number on the command line!
	
	./num 10 20
	The number you entered was: 10

grades.c ->
	What it does? 
	grades.c takes in a list of values (that should be integers), and converts those values into integer values. This program also uses calcGrades to calculate the maximum, minimum, and average grade.
	
	How to Compile?
		grades.o: grades.c calcGrades.h 
			gcc -c grades.c
			
	How to link:
		grades: grades.o calcGrades.o
			gcc grades.o calcGrades.o -o grades 
	
	How to use?
	in the terminal type ./grades list_of_grades_you_want_calculated
	
	Important Notes: MAX_GRADES is set to 20 currently. However for testing purposes it was set to 5. So the tests won't have integer lists that are 20 values long
	Test Data:
	*This program also uses the function calcGrades. So the outputs for this will look very similar to calcGrades however it is important to note that in order for calcGrades to work grades.c needs to be running correctly.*
	*In these examples MAX_GRADES was set to 5 for testing ease.*
	
	./grades 1 1 1
	Lowest Grade: 1
	Top Grade: 1
	Average Grade: 1
	
	./grades
	You need to enter at least one grade and can only enter up to twenty grade values
	
	./grades 1 2 3 4 5 6
	You entered too many grades. The maximum input amount is 5 so I will calculate the first 5 numbers
	Lowest Grade: 1
	Top Grade: 5
	Average Grade: 3
	
	./grades 50 100
	Lowest Grade: 50
	Top Grade: 100
	Average Grade: 75.000000
	
	./grades 10 20 30 40 50
	Lowest Grade: 10
	Top Grade: 50
	Average Grade: 30.000000
	
	./grades 50 20 70 10 100
	Lowest Grade: 10 
	Top Grade: 100
	Average Grade: 50.000000
	
	./grades 1 2 5 -6
	You can't enter a negative number
	
	./grades 4 4 5
	Lowest Grade: 4
	Top Grade: 5
	Average Grade: 4.333333
	

calcGrades.c -> 
	What it does?
	calcGrades.c takes in a list of numbers and the amount of numbers in that list of numbers and then calculates the largest, samllest, and average grade based off of that list and the amount of numbers in it.
	
	How to Compile? 
	In makefile we have created a calcGrades object file which also links the header 
		calcGrades.o: calcGrades.c calcGrades.h
			gcc -c calcGrades.c
	
	calcGrades is linked with grades:
		grades: grades.o calcGrades.o
			gcc grades.o calcGrades.o -o grades 
	
	How to use? 
	*Note: there is no way to run calcGrades seperatley currently. It is simply used as a helper function for grades.c.*
	*What I will be showing now is how it reacted when I set it up so that I could test it. This can no longer be done given the current structure of the program files*
	
	./calcGrades 3 1 2 3
	Lowest Grade: 1
	Top Grade: 3
	Average Grade: 2.000000
	
	./calcGrades 1 1
	Lowest Grade: 1
	Top Grade: 1
	Average Grade: 1.000000
	
	./calcGrades 2 1 1
	Lowest Grade: 1 
	Top Grade: 1
	Average Grade: 1.000000
	
	./calcGrades 7 1 2 3 4 5 6 7
	Lowest Grade: 1
	Top Grade: 7
	Average Grade: 4.0000000
	

leap.c -> 
	What it does? 
	Takes in an integer value that is supposed to represent a year and then tell you if it is a leap year or not. This will only calculate if the year is a leap year after the year 1752.
	
	How to Compile(in makefile)?
		leap.o: leap.c
			gcc -c leap.c 
	
	Linking of leap:
		leap: leap.o
			gcc leap.o -o leap 
		
	How to Use? 
	
	./leap 1750
	You have to enter a year after 1752. You may include 1752.
	
	./leap 1900 
	The year 1900 is NOT a leap year
	
	./leap 2000
	The year 2000 is a leap year
	
	./leap 2100 
	The year 2100 is NOT a leap year
	
	./leap 2016
	The year 2016 is a leap year
	
	./leap 1997
	the year 1997 is NOT a leap year
	
	
calcGrades.h->
	This file is a header file that holds prototypes for any helper functions (in this case those would be calcGrades). It also defines MAX_GRADES which is 20. 
	This file is linked to grades.c and calcGrades.c as shown in the makefile:
		calcGrades.o: calcGrades.c calcGrades.h
			gcc -c calcGrades.c
		grades.o: grades.c calcGrades.h 
			gcc -c grades.c
	
	
	
