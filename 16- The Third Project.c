#include <stdio.h>
#include <ctype.h> // this is a librabry we use it for the toupper or tolower for Converting charchter
// Small program to convert temeprature from c to f or the oppsite
int main(){

    char Unit;
    double Temperature;
    printf("Please chose the unit of the temperture (F) or (C) :");
    scanf("%c",&Unit);
    printf("please eneter you value of the temp :");
    scanf("%lf",&Temperature);

    Unit = toupper(Unit);// we use this to convert the loweer case to uper case
                            // if we want to convert the uper case to the lower case we use //tolower//
    if(Unit == 'F'){
        double TempRes;
        TempRes= (Temperature - 32) * 5/9;
        printf("Your temp is %2.lf C :",TempRes);
    }else if (Unit == 'C')
    {
        double TempRes;
        TempRes = (Temperature * 9/5) + 32;
        printf("Your temp is  %2.lf F :",TempRes);
    } else
    {
        printf("You enter an other , sorry in the mean time our program can work only with F and C");
    }
    return 0;
}
