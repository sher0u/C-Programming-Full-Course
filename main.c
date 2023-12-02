#include <stdio.h>
#include <string.h>

// string function :

int  main(){
    char string1[] = "ABdLelakder";
    char string2[] = "master";

    strlwr(string1); // this will convert to all lower case .
    strupr(string2);// this will convert to all uper case
    printf("%s",string1);
    printf("\n%s",string2);

    strcat(string1,string2);// this will do the + between two variable so the result will be ABdelakder master.
    strncat(string1,string2,2);// this will take the charchater from the sencond string in this example
                                                    // in this will take two charachter and the result will ABdeladerma.


    strcpy(string1,string2);// so this copy from the string 1 to the 2 so if we print the string 1 in the
                                        // so the result will be master
    strncpy(string1,string2,2);// so in this we will just copy the first two charahter .
    strset(string2,'?');// Change the string 2 to the special charhacter.
    strnset(string1,'A',1);// set the first charchater to the wanted charahcter .
    strrev(string2);// Reverse the charachter .

    int result = strlen(string2);
    printf("\n%d",result);
    result= strcmp(string1,string2); // this will compare bewteen the two string if are th esame the result will be 0
                                    // or if are not the same ethe result will 1;
    printf("\n%d",result);
    result = strncmp(string2,string2,2); // it will compare the two first two character .
    printf("\n%d",result);
}