#include <stdio.h>

int main() {
    // Menampilkan deret bilangan genap
    printf("Deret Bilangan Genap dari 0 hingga 50:\n");
    for (int i = 0; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n\n");  // Baris baru setelah deret genap

    // Menampilkan deret bilangan ganjil
    printf("Deret Bilangan Ganjil dari 0 hingga 50:\n");
    for (int i = 0; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
     
    printf("\n");  // Baaris baru setelah bilangan ganjil

    return 0;
}