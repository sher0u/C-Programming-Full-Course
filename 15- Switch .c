#include <stdio.h>
// Switch = a more efficient alternative to using many else if
// allow to tested a value many cases .
int main(){

    char grade;
    printf("enter your grade please A or B or not F :");
    scanf("%c",&grade);

    switch (grade) { // we should type switch and enter what we should check it
        case 'A': // we type case and the case if checked or no
            printf("Have a good time");// the instruction if the case if correct
            break;// to stop after cheking the right answer
        case 'B':
            printf("Your lucky send me a gift");
            break;
        case 'F':
            printf("Your Not bad but you didnt good");\
            break;
        default: // this is called the default case we use it when it theres no case checked an correct .
            printf("You didnt pass the exam or what ??please enter a valid grade");
    }
    return 0;
}
