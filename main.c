#include <stdio.h>
#include <stdbool.h> // this we need it  if we want to use bool .

// in this we will disscuss the data type of the variable
int main() {

    char a = 'c';  // Single charachter %c
    char b[]= "Abdelkader";  // Array of charachter %s
    printf("%c \n",a);
    printf("%s \n",b);

    float C = 3.141592; // 4 bytes (32 bits of precision ) 6-7 digits  %f .
    double d = 3.141592653589793; // 8 bytes (64 bits of precision ) 15-16 %lf
    bool e = true; // 1 byte ( True or false) %d
    printf("%d\n",e);
    printf("%f\n %lf\n",C,d);

    char f = 100;  //1 byte (-128 to 127 ) // %d this will print a decimale  or %c but this will print a ascii character
    unsigned char g=255;  // 1 byte (0 to 255) // %d or %c
    printf("%d\n",f);
    printf("%d\n",g);

    short int h=32767; // 2 bytes (-32,768 to 32,768) // %d
    unsigned short int H=65535; // 2 bytes (0 to 65,535) // %d
    printf("%d\n%d\n",h,H);

    int j = 2147483647; // 4 bytes (-2,147,483,647 to + 2,147,483,647 ) %d
    unsigned int J= 4294967294; // 4 bytes (0 to 4,294,967,294) %u
    printf("%d\n%u\n",j,J);

    long long int A=9223372036854775807; // 8 bytes ( -18,446,744,073,709,551,615 to  18,446,744,073,709,551,615) //%lld
    unsigned long long int AA =  18446744073709551615U; //8 bytes ( 0 to  18,446,744,073,709,551,615) //%llu
                                                        // we added U in the end to display the full number wihtout any warning 
    printf("%lld\n%llu\n",A,AA);

    return 0;
}
