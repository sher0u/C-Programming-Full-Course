#include <stdio.h>

// Constant = is a fixed program that we cant altered by the program  during the execution.
int main(){

    const float Pi=3.1415;
    Pi=32; // will be a problem in the compilation 
    printf("%f",Pi);
    return 0;
}
