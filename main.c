#include <stdio.h>

// Ternary operator =  is a shortcut  if/else  when assigning/ returning a value.
//(condition) ? value if  true : value if false .

int Findmax(int a , int b) { // in this fucntion we will work with the ternary if statment .
    if (a>b){
        return a;
    }else {
        return b;
    }
}
int FindMax_Ternary(int a, int b){ // in this fucntion we will work with ternary
    return (a>b)? a:b;
}

    int main(){

    int max =Findmax(3,4); // heere we called the normal fucntion .
    printf("%d\n",max);
    int Max_Ternary =FindMax_Ternary(5,4);// here we called the function with the ternary .
    printf("%d",Max_Ternary);
    return 0;
}