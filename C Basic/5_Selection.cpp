
/*
    Lesson 5 : Selection

    Before, we already learn about logic table.
    In selection, everything we use selection will be converted into logic table.
    Selection in C :
    1. if
        - if
        - nested if (if inside an if)
        - if else
        - if , else if, else
    2. switch (case)

    if syntax : if(condition) { statement; }

    switch case syntax :
    switch (case){
        case x:
    }

    Usually, we only use switch in case the inputted data sequence
    View the example bellow

*/

#include<stdio.h>
#define G getchar() // define 'G' as getchar(), so we could just call 'G' here

int main(){

    int x, y;

    printf("Input a number : ");
    scanf("%d %d", &x, &y); G;

    // if Example :
    if(x == 1){
        printf("You inputted 1\n");
    }
    // bellow are another condition, you could use it if you want to set another condition
    else if(x == 2){
        printf("You inputted 2\n");
    }
    // if there no condition that match, you could use "else"
    else{
        printf("You inputted a number neither 1 nor 2\n");
    }

    // when you have a condition inside a condition, you could just set it :
    if(x == 1){
        if(y==1){ // this way is not recommended. It usually used when you have a condition, the in that condition you have another task and another condition
            printf("You input y and x one\n");
        }
    }
    // or just write it with logic table
    if(x == 1 && y == 1){
        printf("You input y and x one\n");
    }


    // switch Example :
    int menu;
    printf("Input menu number : ")
    scanf("%d", &menu); G;
    switch(menu){ // menu as the choice
    case 1: // menu input  = 1
        printf("You inputted 1\n");
        break; // use break to stop the case. If you didn't use break, the  it will exec the condition bellow too.
    case 2:
        printf("You inputted 2\n");
        break;

    }

    G;
    return 0;
}
