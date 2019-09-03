
/*
	Lesson 9 : Function
	Function is a group of statements and instructions performing task(s).
	A function is declared as:
	
	data-type function_name(data-type parameter1, data-type parameter2, ..., data-type parametern)
	{
		// do something...
		return data-type;
	}
	
	The exception is void function,
	where you can either type "return;" or nothing.
	
	Actually, the syntaxes that we use daily itselves are function:
		int printf(const char *format, ...); -> returns the amount of printed character
		int scanf(const char *format, ...); -> returns the amount of scanned variables
		char *strcpy(char *dest, char *src); -> returns pointer to dest variables.
		void *malloc(size_t size); -> returns pointer to memory.
		and so on...
		
*/

#include <stdio.h>


int calculate(int x, int y)
{
	return x+y;
}

int zero() { return 0; }

/*
	A function can have parameter, or none at all.
	There are two ways of passing parameters to function:
		- value
		- reference
	
	The function calculate takes two parameters, passed by value.
*/

int increment_value(int x) { x++; return x; }

// You can define a function and its parameter,
// without specifying what they are doing.
// It's called function prototype.

void increment(int *x);

void alter_string(char *buffer) { strcpy(buffer,"test"); }
// void alter_string(char buffer[32]); -> the same as above
// void alter_string(char buffer[]); -> the same as above

int main()
{
	char buffer[32] = {0};
	int x = 5;
	puts("Passing by value");
	puts("=================================");
	printf("x (initial value)        : %d\n",x);
	printf("x (on increment_value)   : %d\n",increment_value(x));
	printf("x (after increment_value): %d\n",x);
	puts("\nPassing by reference");
	puts("=================================");
	printf("x (initial value)  : %d\n",x);
	increment(&x); // we need to specify an address ('&'), so that the function will dereference it ('*')
	printf("x (after increment): %d\n",x);
	return 0;
}

void increment(int *x) { (*x)++; }

/*
	The function increment takes a pointer (reference) of x,
	then add its values by one.
	
	The value of x will change, even after the increment call.
	
	alter_string is also a function which passes the parameter by reference.
	The function itself changes the string parameter to "test".
	buffer variable will change, even after the function call.
	
	Note that we do not need to specify an '&' for an array,
	due to array being a pointer.
	If we take a look at function call alter_string(buffer),
	it simply passes pointer-to-buffer[0] to the function.
	
	Trivia:
		This is also the reason that scanning a string with scanf, doesn't require an '&'
	
	We can conclude that passing by reference also alter the local variable's value, permanently;
	whereas passing by value only alter its value during the function.
*/
