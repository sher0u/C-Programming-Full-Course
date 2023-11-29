#include <stdio.h>

// User Input

int main(){

        int age;
        char name[25];
    printf("How old are you ??");
    scanf("%d",&age);
    printf("What is your name ??");
    scanf("%s",name);// but this will just get the charchter till the space.
    printf("My age is = %d ,and my name is %s...:)\n",age,name);
    fgets(name , 25 , stdin);// to read the space line .
    printf("Your full name is %s",name);
    return 0;
}
