//Write a program to find the LCM of two numbers
#include <stdio.h>

int main() {
    int a, b, tempA, tempB;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    int hcf = a;

    int lcm = (tempA * tempB) / hcf;

    printf("LCM of the two numbers is: %d\n", lcm);

    return 0;
}
