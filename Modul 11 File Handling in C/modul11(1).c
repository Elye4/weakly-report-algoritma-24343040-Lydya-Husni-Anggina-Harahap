#include <stdio.h>
#include <string.h>

// Mendefinisikan struktur untuk menyimpan biodata mahasiswa
struct Mahasiswa {
    char nama[50];
    char nim[20];
    char jurusan[50];
    char program_studi[50];
};

int main() {
    int jumlah, i;

    // Meminta jumlah mahasiswa yang ingin diinputkan
    printf("Masukkan jumlah mahasiswa yang ingin ditambahkan: ");
    scanf("%d", &jumlah);

    // Membuka file untuk menulis data mahasiswa
    FILE *file = fopen("datamahasiswa.txt", "w");
    if (file == NULL) {
        printf("Tidak bisa membuka file untuk menulis.\n");
        return 1; // Keluar jika file tidak bisa dibuka
    }

    // Mendeklarasikan array struktur untuk menyimpan biodata mahasiswa
    struct Mahasiswa mhs[jumlah];

    // Perulangan untuk input data mahasiswa
    for (i = 0; i < jumlah; i++) {
        printf("\nMasukkan data mahasiswa ke-%d\n", i + 1);
        printf("Nama: ");
        getchar(); 
        fgets(mhs[i].nama, sizeof(mhs[i].nama), stdin);
        mhs[i].nama[strcspn(mhs[i].nama, "\n")] = 0; 

        printf("NIM: ");
        fgets(mhs[i].nim, sizeof(mhs[i].nim), stdin);
        mhs[i].nim[strcspn(mhs[i].nim, "\n")] = 0; 
        printf("Jurusan: ");
        fgets(mhs[i].jurusan, sizeof(mhs[i].jurusan), stdin);
        mhs[i].jurusan[strcspn(mhs[i].jurusan, "\n")] = 0; 
        printf("Program Studi: ");
        fgets(mhs[i].program_studi, sizeof(mhs[i].program_studi), stdin);
        mhs[i].program_studi[strcspn(mhs[i].program_studi, "\n")] = 0; 

        // Menulis data mahasiswa ke dalam file
        fprintf(file, "Data Mahasiswa ke-%d\n", i + 1);
        fprintf(file, "Nama: %s\n", mhs[i].nama);
        fprintf(file, "NIM: %s\n", mhs[i].nim);
        fprintf(file, "Jurusan: %s\n", mhs[i].jurusan);
        fprintf(file, "Program Studi: %s\n\n", mhs[i].program_studi);
    }

    // Menutup file setelah menulis semua data
    fclose(file);

    printf("\nSemua data mahasiswa telah berhasil disimpan ke dalam file 'datamahasiswa.txt'.\n");

    return 0;
}
