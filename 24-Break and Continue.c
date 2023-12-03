#include <stdio.h>

// continue =  skips rest of the code  and forces  the next  iteration of the loop.
// break = exit the loop/switch .

int main(){

    for (int i = 0; i <= 20; i++) {

        if (i==13){
            continue; // in this we will skip the case of i=13.
        }
        if(i==15){
            break; // we will stop when we reach 25.
        }
        printf("%d ",i);
    }
}
