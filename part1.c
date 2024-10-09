#include <math.h>
#include <stdio.h>
#define PI 3.14159
#define FREQUENCY 1

int main() {
    long unsigned x = 0;
    float y;
    for (x; x<10000; x++) {
        y = (sin(FREQUENCY * x * PI / 180))/2 + 0.5;
        printf("x = %.10lu y = %.3f\n", x, y);
    }
}