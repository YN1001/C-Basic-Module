
/*
    Lesson 13 : File Processing
    Before, we already learn about how the program flow and process in the program.
    But there, when we do the process, what will it used for?
    Basically, we wold save the data inserted into a file there.

    To save the data, we need to create a file, and then make the file as data which we could get when execute the program.

    For example :
    Your task is to create a program, where you could insert and save the new data into the file.
    Okay, you may think this should be easy when you think you could just open the file, insert the data, and the click save button or CTRL + S right?

    You should know the process behind it. This is the basic anyway of the process.
    Or you could say this is to polish your algorithm and logic :)

*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define G getchar();

struct Human{
    char name[50];
    int age;
    char gender; // M = male, F = female
}people[200];
int index = 0;

void load(){
    /*
        When you open file, you use fopen(const char *filename, const char *mode)
        - parameter 1 is used to let the program know your file name.
        - parameter 2 is used to let the program know what access is given to the file (what you use the file for)
            Parameter 2 (mode), could be written as :
            - r     read
            - w     write
            - a     append
            - rb    read only
            - wb    write only
            - r+    read, but you could do the other process in there too (you could read, write)
            - w+    same as r+
    */

    FILE *file = fopen("YourFile.txt", "r"); // fopen(const char * filename, const char * mode )
    while(fscanf(file, "%[^#]#%d#%c\n", people[i].name, &people[i].age, people[i].gender) != EOF){ // scan until End of File (EOF)
        index++;
    }
    fclose(file); // after open the file, make sure you close it
}

void save(){
    FILE *file = fopen("YourFile.txt", "w");
    for(int i=0; i<index; i++){
        fprintf(file, "%s#%d#%c\n", people[i].name, people[i].age, people[i].gender);
    }
    fclose(file);
}

void printData(){
    system("cls");
    if(index) printf("No data");
    else{
        printf("| %-30s | %-5d | %-5c | \n", "Name", "Age", "Gender");
        for(int i=0; i<index; i++){
            printf("| %-30s | %-5d | %-5c | \n", people[i].name, people[i].age, people[i].gender);
        }
    }
    G;
}

void insertData(){
    // system("cls"); is used to clear the output. Include stdlib.h library here or Windows.h to use this
    system("cls");
    // prompt for data
    do {
        printf("Input name [2-30] : ");
        scanf("%[^\n]", people[index].name); G;
    }while( strlen(people[index].name) < 2 || strlen(people[index].name > 30) );

    do{
        printf("Input your age [2-150] : ");
        scanf("%d", &people[index].age); G;
    }while(people[index].age < 2 || people[inde].age > 150);

    do{
        printf("Input your gender [ M | F ] : ");
        scanf("%c", &people[index].gender); G;
    }while(people[index].gender != 'M' && people[index].gender != 'F');
    index ++;

    printf("Data inserted");
    G;
}

int main(){

    load();
    printData();
    insertData();
    printData();
    save();

    G;
    return 0;
}
