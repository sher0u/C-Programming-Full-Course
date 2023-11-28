#include <stdio.h>
#include <math.h>

// math function
int main(){

    double a=9;
    double b=2;
    double c=3.14;
    printf("%lf\n", sqrt(a));
    printf("%lf\n", pow(b,2));
    printf("%lf\n", round(c));// Rounding 0.5> =+1;
    printf("%lf\n", floor(c));// Rounding down
    printf("%lf\n", ceil(c));// Rounding up
    printf("%lf\n", fabs(-12));// Absolute value
    // this is just the popular use if of some of the fucntion in the lib math .
    // for more inforamtion you cna check this link https://koor.fr/C/cmath/cmath.wp

    return 0;
}