#include <stdio.h>

float potong(float total_pembelian) {
    if (total_pembelian < 1000000) {
        return 0;
    } else if (total_pembelian >= 1000000 && total_pembelian < 3000000) {
        return total_pembelian * 0.20; 
    } else {
        return total_pembelian * 0.35; 
    }
}

int main() {
    float total_pembelian, diskon, jumlah_bayar;

    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &total_pembelian);
    diskon = potong(total_pembelian);
    jumlah_bayar = total_pembelian - diskon;
    printf("Besar Diskon : Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", jumlah_bayar);

    return 0;
}