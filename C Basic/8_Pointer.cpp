/*
	Lesson 8 : Pointer
	This time we are going to discuss about pointer.
	Pointer in C is a variable which stores the address of any variable (and any data-type).	
*/

#include <stdio.h>

int main()
{
	int x = 5;
	int *p = NULL; // this is a way to initialize pointer (setting it to 0/null)
	p = &x;
	
	
	printf("Address of x: %p\n",&x); // &x is address of x
	printf("Address of p: %p\n",p);
	
	// Here the %p format dereference our variable (uses '*', the same as pointer).
	// This is why x needs an '&' and p doesn't need one.
	
	puts("");
	
	printf("Value of x (before increment): %d\n",x);
	printf("Value of p (before increment): %d\n",*p);
	
	puts("");
	
	printf("Value of x (after increment): %d\n",++x);
	printf("Value of p (after increment): %d\n",*p);
	return 0;
}
