#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter natural number 'n':\n");
    scanf("%d", &n);
    if (n < 1 || n > 150) {
        printf("'n' shold be from 1 to 150\n");
        return 1;
    }
    for (int m = 1; m <= n; m++) {
        if (n % m == n / m) {
            count++;
        }
    }
    printf("Quantity of equal dividers of numer %d: %d\n",n,count);
    return 0;
}
