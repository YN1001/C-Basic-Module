#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define flush while(getchar()!='\n')

int main()
{
	/*
		Welcome back, this time we're going to discuss array.
		
		Consider a case:
			You want to create a calculator program,
			where you can calculate stuff and store up to 100 calculations.
			
		Calculating is easy, but how you're going to store the calculation result?
		Are you going to declare:
	*/
	
	int history1, history2; // and so on...
	
	//	That would be inefficient...
		
	//	This is where array comes to play:
	
	int histories[100];
	
	/*
		Array is a data structure that stores a fixed size of same data type.
		You can create array by specifying a square bracket and size (constant) inside.
		
		Array's index starts from 0 to size-1.
		Accessing size-th element (and beyond) in an array causes memory violation error.
		
		There are many ways to initialize an array:
	*/
	
	short y[3] = {-1,-2,-3}; //the standard way to initialize an array;
	long z[10] = {0}; //initialize s from 0-9 with 0
	int x[] = {1,2,3,4,5}; //an array with size of 5 will be created, enough to hold the initialization values.
	
	for(int i=0;i<3;i++) y[i] = 0; //initialize with loop
	
	/*
		Next we will discuss string.
		String is an array of char, terminated by null byte ('\0' or 0).
		
		example: 
			"abcd" would be "abcd\0" or {'a','b','c','d',0} in C
		
		Ways to initialize string are:
	*/
	
	char s1[13] = "Hello World!";
	char s2[32] = {0};
	char s3[] = "Hello World!";
	
	for(int i=0;i<32;i++) s2[i] = 0; 
	
	// What if we want to move the value of a string to another string?
	
	// We are not allowed to do "s2 = s1" or s2 = "hello world!" in C. Instead:
	
	strcpy(s2,s1);
	strcpy(s2,"strcpy test");
	
	/*
		#include <string.h>
		strcpy(char *dest, const char *src);
		
		Here the const char means that you can specify string "abcd" directly,
		without having to put it in a string variable first.
		
		Note that strcpy DOES NOT check the boundaries,
		so if source's length is bigger than destination's,
		memory corruption will occur, thus crashing the program.
		
		Now comes the question, "How do we input a string?"
	*/
	
	scanf("%s\n",s2); 
	
	// scanf stops at space and newline.
	// But, what if we want to include spaces, too? (such as names, and sentence)
	scanf("%[^\n]\n",s2); // scans until a newline is encountered
	fgets(s2,32,stdin); // scans a line, including the newline
	return 0;
}
