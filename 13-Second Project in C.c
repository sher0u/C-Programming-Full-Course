#include <stdio.h>
#include <math.h>

// A small program for finding a hypythonose for a traingle :)

int main(){

    float a,b,c;
    printf("enter your first value ");
    scanf("%f",&a);
    printf("enter your first value ");
    scanf("%f",&b);
    c= sqrt(pow(a,2)+ pow(b,2));
    printf("Your resutl is %.3f",c);
    
    return 0;
}
