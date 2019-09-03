
/*
    Lesson 4 : Logic Table, Binary, and Bit Manipulation

    1. Logic Table
    In math, there's a logic table like "true and true" will output a "true".
    This also used in computer logic to create a condition.

    Truth Table in C language :
    1. AND , written as '&&'
    2. OR , written as '||'
    ________________________________
    | P1 | P2 | (P1&&P2)| (P1||P2) |
    | T  | T  |    T    |     T    |
    | T  | F  |    F    |     T    |
    | F  | T  |    F    |     T    |
    | F  | F  |    F    |     F    |
    |____|____|_________|__________|

    Note :
    - P1 = Premise 1
    - P2 = Premise 2
    - T  = True
    - F  = False


    2. Binary
    For every process (input, output, process) in computer, will be converted into binary number.
    And... what is a binary number again?
    Binary number is a number expressed in base-2 , and only uses '1' or '0' (true or false)
    Example :
    1 0 1 0  == 10
    0 0 0 1  == 1
    How to calculate Binary number:
    from the right side, it will be 2^0, and move to left will be 2^1, and so on
    2^3  2^2  2^1  2^0
    8     4    2    1

    then, if we say the binary number is :
    1 0 1 0
    then it will be :
    2^3  0  2^2  0, which is 8 + 2 = 10



    3. Bit Manipulation
    Bit manipulation is an act or algorithm to manipulating bits
    In bit manipulation, there's bitwise operation :
    - &     and
    - |     or (true if there's at least one of the binary is true)
    - ~     negation
    - ^     XOR (true if there's at least one, but not all of the binary is true)
    - <<    shift left
    - >>    shift right

    Example :
    Given A = 60 and B = 12. Try to manipulate their bit with bitwise operation
    Answer  :
    A = 60, then the binary number is : 0011 1100
    B = 12, then the binary number is : 0000 1100

    i. bitwise operation &
    A : 0011 1100
    B : 0000 1100
    ---------------
    O : 0000 1100
    Note : O = output

    ii. bitwise operation |
    A : 0011 1100
    B : 0000 1100
    ---------------
    O : 0011 1100
    Note : O = output

    iii. bitwise operation ~
    A : 0011 1100
    ----------------
    O : 0000 1100
    Note : O = ~A

    iv. bitwise operation ^
    A : 0011 1100
    B : 0000 1100
    ----------------
    O : 0011 0000
    Note : O = output

    v. bitwise operation <<
    A : 0011 1100            B : 0000 1100
    ----------------        ----------------
    O : 1111 0000            O : 0011 0000
    Note : O = (A<<=1)       Note : O = (B<<=1)

    vi. bitwise operation >>
    A : 0011 1100            B : 0000 1100
    ----------------        ----------------
    O : 0000 1111            O : 0000 0011
    Note : O = (A>>=1)       Note : O = (B>>=1)


*/

#include<stdio.h>

int main(){

    // try the bitwise operation
    int A = 60;
    int B = 12;

    printf("Bitwise or : %d\n", (A|B)); // 60

	printf("Bitwise and : %d\n", (A&B));  // 12

	printf("Bitwise xor : %d\n", (A^B));  // 48

	printf("Bitwise ~A : %d\n", (~A)); // -61 (beacuse the bit will be '1' for each binary which is not '1')

	printf("Bitwise <<A, <<B : %d, %d\n", (A<<=1), (B<<=1)); // 120, 24

	printf("Bitwise >>A, >>B : %d, %d\n", (A>>=1), (B>>=1)); // 60, 24

    getchar();
    return 0;
}
