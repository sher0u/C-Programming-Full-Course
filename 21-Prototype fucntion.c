#include <stdio.h>

//fucntion Prototype:

void welcome(char name[],int a);// this is the protoype of the fucntion
 /* This is a function declared before the main, without the body, to ensure the correct calling of the function.
 * When creating the prototype of the function and forgetting to include one of the arguments,
 * it will result an compilation problem.
 * However, if we don't use a prototype and forget an argument when calling the function in the main code,
 * the program will run normally but will display a random result for the missing argument in the console
 * */
    int main(){
        char name[]="abdelkader";
        int age = 20;
    welcome(name,age);


    return 0;
}
void welcome(char name[],int a){ // this is the normal declaration of the fucntionn after the main
    printf("Hello MRs %s",name);
    printf("\nYour age is %d right ??",a);
    }
