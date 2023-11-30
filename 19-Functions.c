#include <stdio.h>
//Function :
//A fucntion wihtout argument :
void birthday(void) //this is the function we d'ont need to return anything that why we use void
//                  //why I used void in the place or argument to make clear that this function dont need argument.
{
    printf("happy birthday!");
}
// A fucntiopn with argument
int age(int a){ // her ewe used argument
    printf("You have %d years old \n ",a);
    return 0;
}
// a fucntion with arguyment and return :
int POW(int a){
    int s ;
    s=a*a;
    return s;
}

    int main(){
    birthday();// we call the function
    age(19); // we just call the fucntion and fill it with argument ;
    printf("%d", POW(2));
    return 0;
}
