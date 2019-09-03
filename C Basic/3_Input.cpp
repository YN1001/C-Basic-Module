/*
	Lesson 3 : Input
	Continuing our previous lesson, we talked about data type and output,
	now we are going to talk about input.

	There are various ways to input data, but only 3 is popular:
		- getchar
		- scanf
		- fgets
		

	getchar();

	What getchar do is, it reads characters until a newline ('\n') is encountered.
	In usual cases, getchar is not used to do inputting.
	Instead, it is used to clear any newline in the inputs.

	scanf(const char *format, ...);

	Basically the thing is same as printf. Instead of outputting data,
	we are inputting data (storing input to variable).

	example below:
*/


#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	getchar();
	/*
		In the scanf, we specify the format (the same as printf),
		then we specify the variable we want to put the data into.
		We actually need to specify a '&' if we want to input the following datatype:
			- char		
			- short
			- int
			- long
			- long long int
			- float
			- double
			- unsigned
		
		The getchar is actually useful here, since we inputted numbers with newline. It looks like this:
		
		"1234\n"
		This will become a problem later, if we wanted to input a character or sentence;
		the scan will stop immediately.
		
		sentence/string is combination of characters (including space), terminated with newline.
		
		The getchar, then will consume the newline and our input routine can resume normally.
		
		
		The magic of scanf is, if we really wanted to input with a very specific format,
		we can place it in the format.
		
		example: 
			we want to scan with following format:
				x#32000-2000000000000
			
	*/
	
	char a;
	short b;
	long long int c;
	scanf("%c#%hd-%lld\n",&a,&b,&c);
	
	/*
		Actually, there is an alternative to getchar().
		Since in the scanf we can specify ANY format, we can just add the newline after our format.
		Then the scanf will consume the newline.
		
		fgets(char *s, int size, FILE *stream);
		The last in our input method is fgets.
		
		fgets takes a sentence in the FILE, then puts it in our char *s (string variable).
		
		Consider fgets as both an alternative and last resort (if scanf is considered inappropriate)
	*/
	
	char buffer[32]; // we can consider this as string/sentence variable;
	fgets(buffer,32,stdin);
	
	/*
		If we want to take the input from our console,
		we simply specify the FILE to be standard input / stdin (the usual for placing input).
		We will discuss char buffer[32] at array's topic.
	*/
	return 0;
}
