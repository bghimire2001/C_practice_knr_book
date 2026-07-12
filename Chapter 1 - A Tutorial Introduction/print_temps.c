#include <stdio.h>

/* 
Print Fahrenheit / Celsius table
for fahr 0, 20, ... , 300
*/
int main(){
    // Declaration of Variables
    float fahr, celsius;
    float lower, upper, step;

    // Assigning values to variables
    lower = 0.0;
    upper = 300.0;
    step = 20.0;

    fahr = lower;
    printf("Fahrenheit vs Celsius Table\n");
    while(fahr < upper){
        celsius = (5.0 / 9.0) * (fahr + 32.0);
        printf("%10.0f\t%5.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    lower = 0.0;
    upper = 300.0;
    step = 20.0;

    celsius = lower;
    printf("Celsius vs Fahrenheit Table\n");
    while(celsius < upper){
        fahr = (9.0 / 5.0) * (celsius - 32.0);
        printf("%7.0f\t%13.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}