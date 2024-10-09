#include <math.h>
#include <stdio.h>
#define PI 3.14159
#define FREQUENCY 5

int plotval(float y) {
    int width = 60;
    int space = 0;
    for (int i = 0; i < y *width; i++) {
        space += 1;
    }
    return space;
}

int main() {
    long unsigned x = 0;
    float y;
    int space;
    for (x; x<1000; x++) {
        y = (sin(FREQUENCY * x * PI / 180))/2 + 0.5;
        space = plotval(y);
        printf("x = %.10lu y = %.3f| %*c*\n", x, y, space, "");
    }
}