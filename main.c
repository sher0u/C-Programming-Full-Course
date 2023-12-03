#include <stdio.h>
#include <string.h>
// To better understand write the code manually do not copy-paste second try every line
// below there is a lot of material type every part and try to understand it .

// Function Loop = repeat a section of code a limited amount of times.

int main() {
    // For Loop:
    for (int i = 0; i < 10; ++i) {
        printf("%d", i);
    }

    // While Loop:
    // A while loop can run indefinitely or until a certain condition is false.
    // In this case, it reads a name from the user using fgets.

    char name[25];
    printf("Enter your name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; // Removing the newline character at the end.
    printf("%s", name);

    while (name == 0){
        printf("Enter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0'; // Removing the newline character at the end.
    }
    // do while loop = run the block at least one time and after the condition  if it true keep runnning

    // Prompt the user to enter their name at least once
    do {
        printf("Enter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0'; // Removing the newline character at the end.
    } while (strlen(name) == 0);

    printf("Hello, %s!\n", name);


// Nested Loop = is a loop inside in other Loop .
    int column;
    int row;
    char symbol='@';

    printf("Enter Your value of ROWS:");
    scanf("%d",&row);
    scanf("Enter the value of the COLUMNs:");
    scanf("%d",&column);

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%c",symbol);
        }
        printf("\n");
    }
}