#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1;
    } else {
        for (; num != 0; num = num / 10) {
            count++;
        }
    }

    printf("Total number of digits: %d", count);

    return 0;
}
