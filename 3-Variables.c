#include <stdio.h>

//Variable = Allocated space  in memory  to store a value .
//But we need to declare what type of data we are storing in this variable .
// Every variable has a format specifior

int main() {
    // Variabe ------ how many bit ------- specifier
    int x; // THis is declaration . 32 bit // %d
    x=12;  // initialisation .

    int y =1; // this is a declaration + intialisation .
    // NOW lets move on to the data type of the variable .

    int age=20; // This is an integer .
    printf("Your age %d\n",age);

    float mark=4.5; // floating number .  //  %f
    printf("Your Mark %f\n",mark);

    char grade='A';// Single charachter.//8bit  // %c
    printf("Your Grade is %c\n",grade);

    char name[]="Abdelkader"; //    // %s
    printf("My name is %s\n",name);

    short int a;// 16 bit // "hd
    
    long int b;//32 bit //%d

    long long int s;//64 bit // %llg
    return 0;
}
