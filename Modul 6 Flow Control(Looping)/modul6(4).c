#include <stdio.h>

int main() {
    int saldo = 175000;
    int setoran, penarikan;
    int pilihan;

    printf("ATM Hattori\n");
    printf("No Rek: 0123\nNama Akun: Hattori\nSaldo ATM: Rp. %d\n", saldo);

    do {
        printf("\nMenu: \n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu:");

        switch (pilihan) {
            case 1:
                printf("Saldo saat ini: Rp. %d\n", saldo);
                break;

            case 2:
                printf("Masukkan jumlah setoran: Rp.");
                scanf("%d", &setoran);
                saldo += setoran;
                printf("Setoran berhasil. Saldo saat ini: Rp. %d\n", saldo);
                break;

            case 3:
                printf("Masukkan jumlah penarikan: Rp.");
                scanf("%d", &penarikan);

                if (saldo - penarikan >= 50000)  {
                    saldo -= penarikan;
                    printf("Penarikan berhasil. Saldo saat ini: Rp. %d\n", saldo);
                } else {
                    printf("Penarikan gagal! Saldo minimal yang harus disisakan adalah Rp. 50.000\n");
                } 
                break;
                
            case 4:
                printf("Terima kasih. Program selesai.\n");
                break;

            default:
                printf("Pilihan tidak valid! Silakan pilih menu yang benar.\n");
        }       

    } while (pilihan != 4);

    return 0;
}