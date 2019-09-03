
/*
	Lesson 11 : Struct & Malloc
	Struct is a user defined data structure.
	
	For example:
		You want to create a program,
		that reads name and age information from person.
	
	Instead of using person_names[100] and person_ages[100],
	we could use:
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct person
{
	int age;
	char name[100];
};

struct person persons[100];

// This raises a question: "How do you put data and input from struct?"

void input_persons()
{
	for(int i=0;i<100;i++)
	{
		scanf("%d\n",&persons[i].age);
		scanf("%[^\n]\n",persons[i].name);
	}
}

// Do you ever think like: "How do I shorten 'unsigned long long int'?"
// This is where typedef comes to the rescue:

typedef unsigned long long int ull;

// Other than struct declaration above, you can also declare it like:

struct data
{
	struct person human; // nested struct
	char NIM[13];
	double gpa;
}datas[100],student;

/*
	Here the struct data has aliases of:
		- struct data datas[100]
		- struct data student
		
	If you want to access variables inside of data, you can do:
		student.human.age;
		datas[0].human.name[1];
*/

int main()
{
	/*
		The next sub-topic will be heavier than the previouses.
		We will discuss about dynamic variables.
		Let's say you have a program,
		where you input a size (int) n, and then allocates string based on the size.
		It's not allowed to do "char arr[n];" in C.
		
		Instead, you do:
	*/
	datas[0].human.age = 20;
	strcpy(datas[0].human.name,"John");
	int n;
	char buffer[32];
	//scanf("%d\n",&n);
	n = 64;
	char *s1 = (char *)malloc(n);
	char *s2 = (char *)calloc(n,sizeof(char));
	
	/*
		#include <stdlib.h>
		void *malloc(size_t size);
		void *calloc(size_t size, size_t data-type_size);
		
		Since both malloc and calloc returns a void pointer,
		we need to type cast it to our desired data-type.
		
		Both of them allocates a memory somewhere in heap, to be used by programmers.
		Usually, programmers use dynamic allocations for arrays.
		
		The difference between malloc and calloc is:
			- malloc does not initalize data's inside
			- calloc initialize data's inside to 0
		
		Variables declared by the usual way and by malloc (and its friends), are different.
		buffer uses stack, whereas s1 and s2 uses heap.
		
		Stack is a place where our memory is limited (not too limited),
		due to our program using the majority of stack.
		
		Heap is a place where dynamically allocated data is placed, along with its metadata.
		Heap only stores data (and metadata).
		
		P.S. : 
			DO NOT research about heap's metadata now,
			you are not prepared for what's coming (believe me).
			Don't bite more than you can chew :)
			You have been warned.
		
		Here's a proof of why the variable is different:
	*/
	puts("Stack");
	puts("================================");
	printf("buffer's address: %p\n\n",buffer);
	
	puts("Heap");
	puts("============================");
	printf("s1's address: %p\n",s1);
	printf("s2's address: %p\n",s2);
	
	/*
		Now the question is, what if the size was too small?
		For example, you allocated s1 with size of 64,
		then user inputted size of 128.
		
		realloc to the rescue :))
	*/
	
	s1 = (char *)realloc(s1,128);
	
	/*
		#include <stdlib.h>
		void *realloc(void *memory, size_t size);
		
		Basically, realloc expands the size of heap data.
		The memory location will be the same.
	*/
	return 0;
}
