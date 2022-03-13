//
//  main.c
//  Exercise 01-04
//
//  Created by Spenser Dubin on 3/13/22.
//

#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsisus\tFahrenheit\n");
    printf("************************\n");
    while(celsius <= upper) {
        fahr= (9.0/5.0) * celsius + 32.0;
        printf("%3.0f \t\t %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}