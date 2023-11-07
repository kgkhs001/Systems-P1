#include <stdio.h> 
#include <stdlib.h> 
#include "calcGrades.h"
/* This programs purpose is to calculate the min max and average grades of a list of grades. This will be used as a helper function for grades.c
 * Usage: 
 *   ./calcGrades number of grades some list of numbers representing grades
 * Example: 
 *   ./calcGrades 3 1 2 3 
 * 
 */ 
int calcGrades (int nums_in_array, int ints[]){
	int smallest = 100;	//smallest grade
	int largest = 0;	//largest grade
	int i;			//iterator
	float sum = 0;		//sum of the array
	
	//find the smallest value
	for(i = 1; i < nums_in_array + 1; i++){
		if(ints[i] < smallest){			//if the current value in the array is smaller than the stored smallest...
			smallest = ints[i];		//set the smallest to the current value in the array
		}
	}
	
	//finds the biggest value
	for(i = 1; i < nums_in_array + 1; i++){
		if(ints[i] > largest){			//if current value in array is greater than the stored largest ...
			largest = ints[i];		//set the largest value to the current value in the array
		}
	}
	//finds the sum
	for(i = 1; i < nums_in_array + 1; i++){
		sum += ints[i];				//adds all the numbers in the array together
	}
	
	float average = sum / nums_in_array;		//average of all the grades (sum of all grades / number of ints inputted)
	
	printf("Lowest Grade: %d\nTop Grade: %d\nAverage Grade: %f\n", smallest, largest, average);
	return 0;					//indicate success
}

