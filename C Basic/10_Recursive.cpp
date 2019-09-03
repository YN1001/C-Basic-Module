
/*
    Lesson 10 : Recursive
    In Lesson 9 (Function), we have learn that we could call for the function
    the int main() itself is a function, and we could call another function in int main

    So, what is recursive again?
    Basically, what recursive do is a function calling their own function.
    And here the real question :
    Is that valid, to call your own function? And even if it's valid, does not that sound like the program will be infinite loop?
    Yes, it could be executed, but your code will be infinite loop.
    But, recursive not only do that. The function must contains a selection or condition, so when the condition not valid, it will continue

    Look like another method to do the loop here. (Yes, it does)
    Recursive could be used for looping, and even sometimes there's a cases where use recursive would be more efficient than looping

    For the example, we could count prime number, fibonacci, and many else

    Every recursion function has 2 component:
        1. Base case
        2. Recursion.

        The if check is the base case.
        If there is no base case, the recursion will go infinite loop.
        In every recursive function, you must specify base case(s).

        The second return statement states the recursion component,
        and also the decreased or increased variable to reach base case.

        Do note that recursion consumes A LOT of memory,
        because it calls the function itself many times,
        consuming stack (a limited) memory.


*/


#include <stdio.h>

#define G getchar()

// Example 1 : Create power function
int power(int num, int n){
    if(n <= 1 ) return num;
    return num*power(num, n-1);    
}

// End of example 1 function

int main(){
    int num, n;

    printf("Input number : ");
    scanf("%d", &num); G;

    printf("Input times to power : ");
    scanf("%d", &n); G;

    printf("Result : %d", power(num, n));

    G;
    return 0;
}
