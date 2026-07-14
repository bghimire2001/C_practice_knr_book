#include <stdio.h>

/*
It's bad practice to have "Magic Numbers" eg. 300, 20, 0. They don't mean anything
to someone else reading the code later.

*/


/* 
Print Fahrenheit / Celsius table
for fahr 0, 20, ... , 300
*/
#define LOWER_BOUND 0
#define UPPER_BOUND 200
#define STEP 20

int main(){
    // Declaration of Variables
    float fahr, celsius;
    fahr = LOWER_BOUND;
    printf("Fahrenheit vs Celsius Table\n");
    while(fahr < UPPER_BOUND){
        celsius = (5.0 / 9.0) * (fahr + 32.0);
        printf("%10.0f\t%5.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }

    celsius = LOWER_BOUND;
    printf("Celsius vs Fahrenheit Table\n");
    while(celsius < UPPER_BOUND){
        fahr = (9.0 / 5.0) * (celsius - 32.0);
        printf("%7.0f\t%13.1f\n", celsius, fahr);
        celsius = celsius + STEP;
    }
}