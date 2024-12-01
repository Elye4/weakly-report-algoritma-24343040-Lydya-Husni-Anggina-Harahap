#include <stdio.h>

float luas(float radius) {
    return 3.14 * radius * radius;
}
float keliling(float radius){
    return 2 * 3.14 * radius;
}

int main() {
    float radius;
    
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &radius);
    
    printf("Luas lingkaran dengan jari-jari %.2f adalah %.2f\n", radius, luas(radius));
    printf("Keliling lingkaran dengan jari-jari %.2f adalah %.2f\n", radius, keliling(radius));
    
    return 0;
}