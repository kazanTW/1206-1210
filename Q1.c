/* Goldbach's conjecture */

#include <stdio.h>

int primeCheck(int n);

int main(void) {
    int number;
    scanf("%d", &number);

    if (number >= 4) {
        if (number % 2 == 0) {
            for (int i = 3; i <= (number / 2); ++i) {
                if (primeCheck(i) == 0) {
                    continue;
                }
                else if (primeCheck(i) == 1) {
                    if (primeCheck(number - i) == 1) {
                        if (i != number - i) {
                            printf("%d+%d\n", i, number - i);
                        }
                    }
                }
            }
        }
    }

    return 0;
}

int primeCheck(int n) {
    if (n < 3) {
        return 0;
    }
    else if (n >= 3) {
        if (n % 2 == 0) {
            return 0;
        }
        else if (n % 2 != 0) {
            for (int i = 3; i <= n; ++i) {
                if (n % i != 0) {
                    continue;
                }
                else if (n % i == 0 && i != n) {
                    return 0;
                    break;
                }
                else if (n % i == 0 && i == n) {
                    return 1;
                    break;
                }
            }
        }
    }
}