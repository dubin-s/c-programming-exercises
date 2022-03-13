//
//  main.c
//  Exercise 01-03
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

    fahr = lower;
    printf("Fahrenheit\tCelsisus\n");
    printf("************************\n");
    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f \t\t %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}