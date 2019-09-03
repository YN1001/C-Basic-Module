// Lesson 1
// Pre Processing
/*
 - Preprocessor will be executed before a program is compiled.
 - Use '#' to make a process in preprocessor before compiling
 - Example of pre processor :
   -> #include : used to include library or header
   -> #define  : used to create a constant symbol / alternative format
   -> #if .. #endif : used to create a conditional preprocessor
*/


/*
  Example 1, #include
   There's so many library that you could include here (C already provide many library here)
   Library Example : stdio.h, string.h, math.h, algorithm, Windows.h, stdlib.h, malloc.h, etc
   And there, you could also create your own header (it's similar to library) and then include it
   How to use : #include <library_name> or #include "library_name"
*/
#include <stdio.h> // stdio.h is the library that C provide. stdio.h(standard input output.header) is used to include library for input and output in C
#include <string.h> // string.h is the library that contain string manipulation function
#include "myLibrary.h" // your own header


/*
  Example 2, #define
   define could be used if you want to create an alternative or constant symbol
   How to use : #define constant_symbol value/text
*/
#define y 30 // set y value into 30
#define x getchar() // make a constant symbol 'x' of getchar(), so that you can just call x; when you want to call getchar();



/*
 Example 3, if
  if would be used to create any conditional that done in preprocessor
  How to use : #if condition  ....[what to do if condition true]  #endif
*/
#if !defined(x)  // check if there;s already 'x' as defined symbol
    #define x 0  // if there's no, then define x as 0
#endif


/*
There's still many preprocessor, such as #error, #pragma, etc
Usually, the most used one is #include though. If you want to code C languange, usually we use stdio.h
*/
