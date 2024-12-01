#include <stdio.h>
#include <string.h>

void balikkanKalimat(char *kalimat) {
    int panjang = strlen(kalimat);  
    int i, j;
    char temp;

    for (i = 0, j = panjang - 1; i < j; i++, j--) {
        temp = kalimat[i];
        kalimat[i] = kalimat[j];
        kalimat[j] = temp;
    }
}

int main() {
    char kalimat[100];  

    printf("Kalimat Masukan: ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = 0;  

    balikkanKalimat(kalimat);
    printf("Kebalikannya: %s\n", kalimat);

    return 0;
}