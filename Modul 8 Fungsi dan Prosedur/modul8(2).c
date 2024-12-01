#include <stdio.h>

float tambah(float a, float b);
float kurang(float a, float b);
float kali(float a, float b);
float bagi(float a, float b);

int main() {
    float num1, num2, hasil;
    int pilihan;

    printf("Masukkan angka pertama: ");
    scanf("%f", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &num2);

    printf("\nPilih operasi:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Masukkan pilihan (1/2/3/4): ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            hasil = tambah(num1, num2);
            printf("Hasil penjumlahan: %.2f\n", hasil);
            break;
        case 2:
            hasil = kurang(num1, num2);
            printf("Hasil pengurangan: %.2f\n", hasil);
            break;
        case 3:
            hasil = kali(num1, num2);
            printf("Hasil perkalian: %.2f\n", hasil);
            break;
        case 4:
            if (num2 != 0) {
                hasil = bagi(num1, num2);
                printf("Hasil pembagian: %.2f\n", hasil);
            } else {
                printf("Error: Pembagi tidak boleh nol!\n");
            }
            break;
        default:
            printf("Pilihan tidak valid!\n");
            break;
    }

    return 0;
}

float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    return a / b;
}


