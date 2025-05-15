#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    int sqrt_n = (int)sqrt(n);
    for (int i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    for (int i = 1; i <= 10000000; i++) {
        if (is_prime(i)) {
            count++;
        }
    }
    printf("1から10000000までの素数の数: %d\n", count);
    return 0;
}
