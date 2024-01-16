#include <stdio.h>
#include <math.h>

#define VOLUME_OF_SPHERE(r) (4.0 / 3) * 3.14159265358979323846 * pow(r, 3)

int main() {
    int i;
    double radius, volume;

    printf("%10s %10s\n", "Radius", "Volume");
    printf("%10s %10s\n", "(units)", "(units^3)");

    for (i = 1; i <= 10; i++) {
        radius = i;
        volume = VOLUME_OF_SPHERE(radius);
        printf("%10.1f %10.2f\n", radius, volume);
    }

    return 0;
}
