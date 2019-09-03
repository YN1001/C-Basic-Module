
/*	
	Lesson 12 : String Manipulation
	Last time we are discussing about string, now we are going to manipulate it.
	
	First question that comes in mind, "How to calculate length of a string?"
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char buffer[64];
	scanf("%[^\n]\n",buffer);
	
	int len = strlen(buffer);
	
	/*
		#include <string.h>
		strlen(const char *s);
		
		strlen simply loops through the string (char array),
		until null-byte is encountered ('\0' or 0).
		
		Note: all syntax from now on uses <string.h>
		
		The next question: "How to compare string?"
		
		For example:
	*/
	
	char s1[] = "Hello";
	char s2[] = "World";
	
	// You can't do if(s1 == s2) in C.
	// Because string is represented as an array, not variable
	// Thus comparing array to array is not allowed.
	// Instead:
	
	if(strcmp(s1,s2) == 0) puts("s1 and s2 matches!");
	else puts("Nope");
	
	/*
		strcmp(const char *s1, const char *s2);
		
		strcmp here has 3 results:
			- -1 (s1 < s2)
			- 0  (s1 > s2)
			- 1  (s1 == s2)
		
		Another question: "How to reverse a string?"
	*/
	
	printf("Before strrev: %s\n",s1);
	strrev(s1);
	printf("After strrev: %s\n\n",s1);
	
	// strrev(char *s);
	// strrev, simply reverses a string variable.
	// Another question: "How to convert a string to upper/lowercase?"
	
	printf("Before strlwr: %s\n",s1);
	strlwr(s1);
	printf("After strlwr: %s\n\n",s1);
	
	printf("Before strupr: %s\n",s2);
	strupr(s2);
	printf("After strupr: %s\n\n",s2);
	
	/*
		strlwr(char *s);
		strupr(char *s);
		
		Those two functions simply convert alphabetic characters (a to z and A to Z),
		to upper and lower case respectively.
		
		There is an alternative without using <string.h> library, though.
		Simply use algorithm :)
		
		Example:
	*/
	
	char buffer[32] = {0};
	int idx = 0;
	for(len = 0;s1[len] != '\0';len++); // len will be the length of "Hello"
	
	while(len) buffer[idx++] = s1[--len]; // reverses s1 and put it into buffer
	buffer[++idx] = 0; // append a null terminator, just in case...
	
	// sadly, you really have to use strcmp if you want to compare strings...
	
	for(int i=0;s1[i]!=0;i++) // strupr
	{
		if(s1[i] >= 'a' && s[i] <= 'z') s[i] = s[i]-32;
	}
	
	for(int i=0;s[i]!=0;i++) // strlwr
	{
		if(s1[i] >= 'A' && s[i] <= 'Z') s[i] = s[i]+32;
	}
	
	char anotherbuffer[64] = {0};
	for(int i=0;i<len;i++) anotherbuffer[i] = buffer[i]; // simple strcpy
	
	return 0;
}
