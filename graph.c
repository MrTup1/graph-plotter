#include <stdio.h>
#include <math.h>

int main() {
    long unsigned x = 0;
    for (x; x<10000; x++) {
        printf("x = %.10lu\n", x);
    }
}