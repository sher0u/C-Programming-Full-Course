#include <stdio.h>
#include <string.h>

// array = a data structure  that can  store many  value  of the same data type.

int main(){
    // simple array and filling manually :

int age[]={12,13,14,15,16};
    printf("%d",age[0]);
    printf("\n");

    // filling the array with a loop:
    double price[5];
    for (int i = 0; i < 5; ++i) {
        printf("Enter you value");
        scanf("%lf",&price[i]);
    }
    //Printing the value of the array with a loop
    for (int i = 0; i < 5; ++i) {
        printf("Your value %.2lf\n",price[i]);
    }
    printf("\n");

    // filling the array with the size of operation:
    double degre[5];
    for (int i = 0; i < sizeof(degre)/sizeof (degre[0]); ++i) {
        printf("Enter you value");
        scanf("%lf",&degre[i]);
    }

// 2D array = it is an array with row and column you can use it for the matrix or data
    // first way to declare a 2D array
    int matrix[3][3] = {
             {1, 2, 3},
            { 2, 3, 4 }
    };
    // Second way to declare a 2D array
    int TAble2[2][3] ;
    scanf("%d",&TAble2[0][0]); // this is just to fill manual the first value of this 2 array

    // now we will fill the table with the loop fucntion.

    printf("The filling with loop the 2");
    int Tab[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d",&Tab[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d",Tab[i][j]);
        }
    }
    // now we will fill the table with the loop fucntion but using the size of
    float Table2d[4][5];
    int row,collumn;
    row = sizeof Table2d/sizeof Table2d[0];
    collumn = sizeof Table2d[0]/sizeof Table2d[0][0];

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < collumn; ++j) {
            scanf("%d",&Table2d[i][j]);
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < collumn; ++j) {
            printf("%d",Table2d[i][j]);
        }
    }
    
    //array of string

    char car[][10]= {"mustang","merceded","camaro"};
    strcpy(car[0],"tesla");
    printf("%s",car[0]);

    return 0;
}