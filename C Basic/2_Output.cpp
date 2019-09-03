
// Lesson 2
// Data Type and Output
/*
   Data Type
   ---------
   In C programming language, there's many data type :
    - int (integer)      = numeric data type (in decimal)
    - char (character)   = character data
    - float              = decimal number
    - long int           = same with int, but provide a large amount of number
    - double             = decimal and integer value
    - short              = numeric data type, but half the int's size
    - unsigned           = unsigned is actually a modifier, not a data type.
                           This modifier makes data type can only handle positive numbers,
                           doubling the positive number range, but unable to handle negative number
                           (-1 resulting in a maximum possible number).

   Output
   -------
   In library stdio.h, there's 3 kind of output. there is :
    - printf
    - puts
    - putchar
*/

#include <stdio.h>

int main(){ // Main function. This  function will be called first after the program executed. For the function, there will be more explanation in Lesson 9
    //Your code will written here. Remember to set the scope '{}'
    /*
     Example 1 : printf (const char *format, ...);
     printf is a standard output that could be used when you want to have an output with formatted or standard output
     const char *format could be written as '%' and add the formatted char there, regarding the data type, you want to print
     Formatted char:
      - %d    int
      - %f    float
      - %c    char
      - %s    array of char (a sentence)
      - %p    pointer
      - %ld   long int
      - %u    unsigned int
      - %lu   long unsigned
      - %lld  long long int
    In formatted char, you could specify length for the output  :
     - printf("%*d", witdh, number);
     - printf("%*d", number); // fill '*' with a number [do not use '-' if you want to print the output from left side]
     - printf("%-*d", number); // fill '*' with a number [use '-' if you want to print the output from right side (there will be a space to fill it until the specified number)]
    Example :
    */
    // printf will give an output without newline

    // print normally
    printf("Hello World"); // Hello World

    // print int (number) with formatted char
    printf("%d", 1); // 1

    // print int and string with formatted char
    printf("%d %s", 1, "Hello"); // 1 Hello

    printf("%*s", 10, "Hello"); //      Hello

    printf("%-10s\n", "test"); // test      \n

    /*
        Example 2 : puts(const char *s)
        puts print a string and trailing a newline
        Note : puts does not support formatted output like printf
    */

    puts("Hello World"); // Hello World/n

    /*
        Escape Sequence :
        - \n  : printing an enter (new line)
        - \0  : NULL
        - \a  : alert (there will be an alert sound if you use this)
        - \t  : tab
    */
    return 0; // return exit code success
}
