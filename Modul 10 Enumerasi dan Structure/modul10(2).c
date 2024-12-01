#include <stdio.h>
#include <string.h>

typedef struct {
    int tanggal;
    int bulan;
    int tahun;
} TanggalLahir;

const char* getZodiak(int tgl, int bln) {
    const char* zodiak[] = {
        "CAPRICORN", "AQUARIUS", "PISCES", "ARIES", "TAURUS", "GEMINI",
        "CANCER", "LEO", "VIRGO", "LIBRA", "SCORPIO", "SAGITTARIUS"
    };
    
    int batasTanggal[] = {
        20, 19, 21, 20, 21, 21,
        23, 23, 23, 22, 22, 22  
    };

    if (bln == 1 && tgl >= 20 || bln == 12 && tgl <= 20)
        return zodiak[0];
    for (int i = 1; i < 12; i++) {
        if (bln == i+1 && tgl >= batasTanggal[i-1] || bln == i+2 && tgl <= batasTanggal[i])
            return zodiak[i];
    }
    return "Invalid";
}

int main() {
    TanggalLahir lahir;
    
    printf("Masukkan Tanggal Lahir Anda (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &lahir.tanggal, &lahir.bulan, &lahir.tahun);
    
    printf("Tanggal Lahir Anda: %02d-%02d-%d\n", lahir.tanggal, lahir.bulan, lahir.tahun);
    printf("Zodiak Anda adalah: %s\n", getZodiak(lahir.tanggal, lahir.bulan));

    return 0;
}