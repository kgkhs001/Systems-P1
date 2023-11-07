#include <stdio.h> 
#include <stdlib.h> 
 
/* Program to detect if an inputted year is a leap year
 * Created by <Krishna Garg, kgarg@wpi.edu> 
 *
 * Usage: 
 *   ./leap some year
 * Example: 
 *   ./leap 2023 
 * 
 */ 
 
int main (int argc, const char* argv[]) { 
  if(argc < 2){						//Checks that a year was entered
	printf("You must enter a year\n");
	return 1;//indicate failure
  }
  if(argc > 2){						//Checks to make sure that only one year was entered
	printf("Sorry but this program can only analyze one year at a time\n"); 
	return 1; 					//indicate failure
  }
  
  int year = atoi(argv[1]);				//converts the input to an
  if(year < 1752){					//Checks if the year is within valid range
	printf("You have to enter a year after 1752. You may include 1752.\n");
	return 1; 					//indicate failure
  }
  else{
	if(year % 4 != 0){						//finds all the fail cases first if the years not divisible by four 
		printf("The year %d is NOT a leap year.\n", year);
	}
	else if(year % 100 == 0 && year % 400 != 0){			//if the year is divisible by 100 but not by 400
		printf("The year %d is NOT a leap year.\n", year);
	}
	else{								//if these fail cases are not true then the year is a leap year
		printf("The year %d is a leap year.\n", year);
	}
  }
  return 0;								//indicate success
} 
