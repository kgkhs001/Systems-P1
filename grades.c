#include <stdio.h> 
#include <stdlib.h> 
#include "calcGrades.h"
/* This programs purpose is to find the max min and average value of the inputted grades
 * Usage: 
 *   ./grades some list of numbers
 * Example: 
 *   ./grades 23 25 15 37 95 etc...
 * 
 */ 
 
int main(int argc, const char* argv[]) {
   int all_grades[MAX_GRADES];		//array storage allocation and definition
   int i; 				//itterator declaration
   int nums_entered = argc - 1;
   
   if(argc < 2){
   	printf("You need to enter at least one grade and can only enter up to twenty grade values\n");
   	return 0;
   }
   if(nums_entered < MAX_GRADES + 1){
   	//check for negative values
   	for(i = 1; i < argc; i++){
   		int n = atoi(argv[i]);	//saves the current index in the original array to storage	
		if(n < 0){ 		//there can be no negative grades. This will check for that
		   printf("You can't enter a negative number\n");
		   return 1;		//indicate failure!
		}
   	}
   	
   	
	//This loop goes through the inputted string list and converts each to an integer and adds them to a new array. The loop runs as long as the iterator is one less than the number of inputs
	for(i = 1; i < argc; i++){	// i is set to 1 because the first arguement is technically ./grades which will return as 0
		int n = atoi(argv[i]);		//saves the current index in the original array to storage	
		all_grades[i] = n; 		//sets the current index in the accumulator array to the stored value in storage
		//printf("%d ", all_grades[i]);	//prints the value in the current index of the accumulator array. THIS IS FOR TESTING PURPOSES ONLY
    	}
    	calcGrades(nums_entered, all_grades);	//uses the calcGrades function and passes the appropriate parameters
   	return 0;
   }
   
   else{	//handles too many inputs
   	printf("You entered too many grades. The maximum input amount is %d so I will only calculate the first %d numbers\n", MAX_GRADES, MAX_GRADES);
   	//This loop goes through the inputted string list and converts each to an integer and adds them to a new array. The loop runs as long as the iterator is one less than the number of inputs
	for(i = 1; i < MAX_GRADES + 1; i++){	// i is set to 1 because the first arguement is technically ./grades which will return as 0
		int n = atoi(argv[i]);		//saves the current index in the original array to storage	
		all_grades[i] = n; 		//sets the current index in the accumulator array to the stored value in storage
		//printf("%d ", all_grades[i]);	//prints the value in the current index of the accumulator array. THIS IS FOR TESTING PURPOSES ONLY
    	}
   	calcGrades(MAX_GRADES, all_grades);
   	return 0;
   }
  
}
