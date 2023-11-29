#include <stdio.h>

// Format specifier %= define and format a type  of data  to be displayed :
// %c character.
// %s string an array of character.
// %d an integer.
// %f float.
// %lf Double.

/*
 * %.1 decicmal precision.
 * %1 minuim field with.
 * %- Left align.
 */

int main(){
    float item1=5.75;
    float item2=10.00;
    float item3=100.99;

    printf("%8.2f dollar\n",item1); // THIS WILL GIVE US A SPACE BEFORE THE RESULT IN THE CONSOLE
    printf("%-5.2f dollar\n",item2);// THIS WILL GIVE US A SPACE AFTER THE RESULT IN THE CONSOLE
    printf("%.2f dollar\n",item3);

    return 0;
}
