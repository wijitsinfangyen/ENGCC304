#include <stdio.h>

int main() {
    float h, w;
    printf("H =");
    scanf("%f", &h);
    printf("W =");
    scanf("%f", &w);
    printf("Area = %.1f\n", (h * w) / 2);
    return 0;
}
