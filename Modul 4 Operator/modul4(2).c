#include <stdio.h>

int main()
{
    char namapembeli[100], namabarang[100];
    int hargabarang, jumlahbarang, hargatotal;
     printf("masukkan nama pembeli:");
    scanf("%s",namapembeli);

    printf("masukkan nama barang:");
    scanf("%s",namabarang);

    printf("masukkan harga barang:");
    scanf("%d",&hargabarang);

    printf("masukkan jumlah barang:");
    scanf("%d",&jumlahbarang);

    hargatotal = hargabarang * jumlahbarang;

    printf("\nNama pembeli:%s\n",namapembeli);
    printf("Nama barang:%s\n",namabarang);
    printf("Harga barang:%d\n",hargabarang);
    printf("Jumlah barang:%d\n",jumlahbarang);
    printf("harga total:%d\n",hargatotal);
    
    return 0;
}