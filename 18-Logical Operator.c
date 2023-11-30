#include <stdio.h>

// Logical Operator In c
// First logical is and && check if the condition are true.
// Second logical operator is || check if the if the condion at least one true .
// The not logical operator !

int main() {
    int Temp1=25;
    int Temp2=10;
    bool sunny = true;

    //The and logical &&
    if (Temp1 >= 25 && sunny){
        printf("Go take a walk ;)");
    } else
        printf("Rest at home , watch a film!");
    //the OR logical ||
    if (Temp1 > 30 || Temp2 <= 10)
    {
        printf("\nThis is not logical but just to make you understant the or logical ");
    }
    // the not logical operator
    bool BillGateRich = 0;
    if (!BillGateRich == 1)
    {
        printf("\nFuck yes he is bill gates");
    } else
    {
        printf("I dont know him :)");
    }
    return 0;
}
