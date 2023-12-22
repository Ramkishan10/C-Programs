#include <stdio.h>
#include <math.h>

void calculate_area(char shape, float size) {
    if (shape == 'S') {
        float area_square = size * size;
        printf("Area of Square = %.2f\n", area_square);
    } else if (shape == 'C') {
        float area_circle = M_PI * size * size;
        printf("Area of Circle = %.2f\n", area_circle);
    } else {
        printf("Invalid shape. Please enter 'S' for Square or 'C' for Circle.\n");
    }
}

int main() {
    char shape1 = 'S';
    float size1 = 4;
    calculate_area(shape1, size1);
    char shape2 = 'C';
    float size2 = 4;
    calculate_area(shape2, size2);
    return 0;
}

