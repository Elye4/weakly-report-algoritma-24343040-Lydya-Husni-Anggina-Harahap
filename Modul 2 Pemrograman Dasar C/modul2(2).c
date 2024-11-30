#include <stdio.h>

int main(){
    char nama[100], nim[100], prodi[100], fakultas[100];
    float nilaipraktikum, uts, uas, nilaiakhir;

    printf("masukkan nama anda:");
    scanf("%s",&nama);

    printf("masukkan nim anda:");
    scanf("%s",&nim);

    printf("masukkan prodi anda:");
    scanf("%s",&prodi);

    printf("masukkan fakultas anda:");
    scanf("%s",&fakultas);

    printf("masukkan nilaipraktikum anda:");
    scanf("%f",&nilaipraktikum);


    printf("masukkan nilai uts anda:");
    scanf("%f",&uts);

    printf("masukkan nilai uas anda:");
    scanf("%f",&uas);

    nilaiakhir = (0.3*nilaipraktikum) + (0.3*uts) + (0.4*uas);

    printf("\nNama:%s\n",nama);
    printf("Nim:%s\n",nim);
    printf("Prodi:%s\n",prodi);
    printf("Fakultas:%s\n",fakultas);
    printf("Nilai Praktikum:%.2f\n",nilaipraktikum);
    printf("Nilai UTS:%.2f\n",uts);
    printf("Nilai UAS:%.2f\n",uas);
    printf("Nilai Akhir:%.2f",nilaiakhir);

    return 0;


    

    }