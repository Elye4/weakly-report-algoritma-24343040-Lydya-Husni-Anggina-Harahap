#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Masukkan banyak mahasiswa: ");
    scanf("%d", &n);

    getchar();

    char nama[n][100];  

    for (i = 0; i < n; i++) {
        printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
        fgets(nama[i], sizeof(nama[i]), stdin); 
    }

    printf("\nNama-nama mahasiswa:\n");
    for (i = 0; i < n; i++) {
        printf("Nama mahasiswa ke-%d: %s", i + 1, nama[i]);
    }

    return 0;
}