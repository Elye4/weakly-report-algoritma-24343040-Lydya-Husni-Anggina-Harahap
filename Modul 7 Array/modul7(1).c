#include <stdio.h>

int main() {
    int nilai[20];  
    int i;
    int total = 0;
    float rataRata;
    printf("Masukkan nilai mahasiswa (20 mahasiswa):\n");
    for (i = 0; i < 20; i++) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
        total += nilai[i]; 
    }

    rataRata = total / 20.0;

    printf("\nTotal nilai: %d\n", total);
    printf("Rata-rata nilai: %.2f\n", rataRata);

    return 0;
}

