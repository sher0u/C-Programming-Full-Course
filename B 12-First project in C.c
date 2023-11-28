#include <stdio.h>
#include <math.h> // we call it for the pow fucntion later .

// In this part we will create a program that he calculate the circufemance and the area of the circule

int main(){

    const float Pi=3.14;// we use constant to aviod changing the value after because pi doasnt change .
    int radios;
    printf("Enter the The radios of the circle with meter :");
    scanf("%d",&radios);
    printf("Your area of the circel is %.2lf m^2\n",Pi* pow(radios,2));//this i did make a variable to calculate i made tyhe calcule in the print
    printf("Your cirumferance of the circel is %.2lfm",Pi*radios*2 );


    return 0;
}
