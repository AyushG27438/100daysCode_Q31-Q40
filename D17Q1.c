//Write a program to check if a number is an Armstrong number
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = num;

    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
