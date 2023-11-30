#include <stdio.h>

// A SMALL PROGRAM FOR CALCULATOR:
int main() {

    char operation;
    double Num1, Num2, Result;

    printf("Please enter your first number: ");
    scanf("%lf", &Num1);

    // Add a space before %c to consume any whitespace characters
    printf("Please enter your Operation sign: ");
    scanf(" %c", &operation);// When you use scanf to read a character, it leaves the newline
    // character in the input buffer from the previous Enter key press. To fix this issue,
    // you can add a space before the %c format specifier in the scanf
    // function for reading the operation sign. This will consume any whitespace characters, including the newline.

    printf("Please enter your second number: ");
    scanf("%lf", &Num2);

    switch (operation) {
        case '+':
            printf("Your calculated result = %lf", Num1 + Num2);
            break;
        case '-':
            printf("Your calculated result = %lf", Num1 - Num2);
            break;
        case '*':
            printf("Your calculated result = %lf", Num1 * Num2);
            break;
        case '/':
            // Check if Num2 is not zero before performing division
            if (Num2 != 0) {
                printf("Your calculated result = %lf", Num1 / Num2);
            } else {
                printf("Error: Division by zero!");
            }
            break;
        default:
            printf("Sorry, you entered another sign not available in our program. We will add it in the next update.");
    }

    return 0;
}
