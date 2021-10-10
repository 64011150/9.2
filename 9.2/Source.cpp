#include <stdio.h>
float sqroot(float s, float precision) {
    float x0 = s / 2.0;
    float x1 = 0.0;
    float delta;
    for (delta = 1; delta > precision; x0 = x1) {
        x1 = .5 * (x0 + s / x0);
        if (x1 - x0 >= 0) {
            delta = x1 - x0;
        }
        else {
            delta = x0 - x1;
        }        
    }
    return x1;
}
int main() {
    float s;
    scanf_s("%f", &s);
    float x = sqroot(s, .0000001);
    printf("x = %.7f", x);
    return 0;
}