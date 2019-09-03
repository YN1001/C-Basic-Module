
/*
    Lesson 6  :Looping
    Looping is a repetition section or execute a group of statement in multiple times.
    In C language, looping have 3 type  :
    - for
        Execute a sequence statements multiple times, with a specified number of times
        Syntax :
        for( init ; condition ; statement ){
            statement....
        }
    - while
        Execute a statement as long as the condition is true
        Syntax :
        while( condition ){
            statement....
        }
    - do..while
        Execute a statement and check the condition. If condition true, then it will repeat.
        Syntax  :
        do {
            statement...
        }while( condition );
*/

#include <stdio.h>
#define G getchar()

int main(){

    // 1. for Exampple
    for(int i=0; i<10; i++){
        printf("Hello World\n");
    }
    /* this looping will print "Hello World" 10 time
        first, we initialize 'i' variable and set it into 0,
        then in condition segment, it will check if i less than 10.
        If the condition is true, then the program will execute the third segment and statement in the scope
        In here, we see that it will increment i (i++) by one.

        Note :
        In C, we could increment an integer with (++num) or (num++)
        this means : number = number + 1;
        You could also increment it by 2, 3, and so on.
        Example : num+=2, num+=10
        This order valid with another math operator, like minus (-), divide (/) and other math operator
    */

    // 2. while Example
    int i = 0;
    while( i < 10 ){
        printf("%d. %c\n", (i+1), (i+65)); // this will print 1. A, and loop until i not less than 10
        i++;
    }
    /*
        "while" will loop when the condition is false.
        This loop will proceed 10 times
        when i equals to 10, then the condition will become false.
        printf("%d. %c\n", (i+1), (i+65));
        this looping will print a number, start with 1 (as we initialize i = 0, and we increment i here)
        and a character, start by 'A' (we increment i by 65 because in Ascii table, 'A' character start by 65)

        Here, you could also code it like this :
        int i=0;
        while(i++){
            printf("Hello World\n");
        }
    */

    // 3. do..while Example

    int x = 0;
    do{
        printf("Quote of the day : Learn is not hard when you compare to understanding humans\n");
        x++;
    }while(x<0);

    /*
        do..while here will do the statement, and then check.
        So, even the condition is false from the start, it will execute the task  at least once
        In this example, it will print the output once, and then continue continue
        Usually, this looping used to do the validation. Example :
    */
    int num; // we want num with range 1-100
    do{
        printf("Input a number [1-100]: ");
        scanf("%d", &num); G;
    } while( num<1 || num>100 ); // when the inputted num is less than 1 or greater than 100, then it will loop (condition will be true)

    G;
    return 0;
}


