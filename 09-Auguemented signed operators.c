#include <stdio.h>

/*
 * auguemented signed operators =  used to replace  a statement  where
 *                                  where an operator  take a variable as one
 *                                  of its arguments  and then  assigns the results back to
 *                                  to the  same variable
 *                                  x=x+1; ..... x+=1;
 */

int main(){

    int x=2;
    x+=1;
    printf("%d\n",x);
    x-=1;
    printf("%d\n",x);
    x/=1;
    printf("%d\n",x);
    x*=1;
    printf("%d\n",x); // the result should be in the console 2

    return 0;
}
