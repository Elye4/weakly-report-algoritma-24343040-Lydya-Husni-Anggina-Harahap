#include <stdio.h>

int main() {
    float celsius, kelvin, fahrenheit, reamur;

    // Meminta input dari pengguna
    printf("Masukkan suhu dalam Celsius: ");
    scanf("%f", &celsius);

    // Melakukan konversi
    kelvin = celsius + 273.15;
    fahrenheit = (celsius * 1.8) + 32;
    reamur = celsius * 0.8;

    // Output yang dihasilkan 
    printf("Suhu dalam Kelvin: %.2f\n", kelvin);
    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f\n", reamur);

    return 0;
}