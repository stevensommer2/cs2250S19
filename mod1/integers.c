#include<stdio.h>
// This is a comment. Your compier will ignore it 
/* this is a multi line comment so the compiler will ignore this until I type the ending to the symbol of the multi line comment*/
//To compile my code run this comman: gcc <file.c> -o <file>
// to run you code: ./<file>
//
int main()
{	
	// int <label>
	
	int age = 21;
	int weight = 150;
	
	//if an integer is left blank, it is undefined.

	//printf() to print output to the screen.
	
	printf("How old are you?\n");

	// use placeholder to display variable information
	// for example: %d for integers
	// 		%p fo address of variable
	// 		Use the '&' operator to get it
	
	printf("I am %d years old\n", age);

	//the address is less significant because it is the location
	//within the RAM and it will change every time you use the code
	
	printf("the address of int age is = %p\n" , &age);
	age = 22;

	//Once the variable is used, it can be redefined as above and the 
	//name (age) can be used again for a different variable.
		
	printf("How old are you?\n");
	printf("I am %d years old\n", age);
	printf("You are are %d years and %d pounds.\n", age, weight);
	
	
	
	return 0;
}

