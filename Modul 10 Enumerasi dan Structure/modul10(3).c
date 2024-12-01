#include <stdio.h>
#include <string.h>

typedef struct {
    char npm[15];
    char nama[100];
    char tgl_lahir[15];
    char alamat[100];
    char hp[15];
} Mahasiswa;

int main() {
    Mahasiswa mahasiswa[100];  
    int count = 0;
    char lagi;  

    do {
        printf("Masukkan NPM: ");
        scanf("%s", mahasiswa[count].npm);

        printf("Masukkan NAMA: ");
        scanf(" %[^\n]%*c", mahasiswa[count].nama);  

        printf("Masukkan TGL LAHIR (dd-mm-yyyy): ");
        scanf("%s", mahasiswa[count].tgl_lahir);

        printf("Masukkan ALAMAT: ");
        scanf(" %[^\n]%*c", mahasiswa[count].alamat); 

        printf("Masukkan HP: ");
        scanf("%s", mahasiswa[count].hp);

        count++;  
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lagi);   
    } while (lagi == 'y' || lagi == 'Y'); 

    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < count; i++) {
        printf("%s %s %s %s %s\n", mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tgl_lahir, mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    return 0;
}
