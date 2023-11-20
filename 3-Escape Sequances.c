#include <stdio.h>

/* Escape Sequance = charachter combination  consisting of a backslash \
 *                   followed By  a letter  or combiantion  of digit .
 *                   every letter or expression express an action
 *                   \n = New line
 *                   \t = tab
 *                   */
int main() {
    printf("Hello \n Word!\n"); // the result in console will be Hello in a line and the world in a line
    printf("1\t2\t3\n"); // The result in the console will be like this 1       2       3
    printf("\"I like programming\" YOUSFI ABDELKADER\n"); // \" this will display the quotes if you need to print it
    printf("\\THIS HOW TO USE DOUBLE SLASH\\"); // THIs will disaplay double slash
    return 0;
}
