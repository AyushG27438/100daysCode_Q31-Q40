#include <stdio.h>

int main() {
    int num, remainder;
    int product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Product of odd digits: ");

    for (int temp = num; temp > 0; temp /= 10) {
        remainder = temp % 10;
        if (remainder % 2 != 0) {
            if (hasOdd) {
                printf(" * %d", remainder);
            } else {
                printf("%d", remainder);
                product = 1;  // Initialize product when first odd digit found
                hasOdd = 1;
            }
            product *= remainder;
        }
    }

    if (hasOdd) {
        printf(" = %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}
