#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game() {
    int number_to_guess, user_guess, attempts = 0;

    srand(time(NULL));
    number_to_guess = rand() % 20 + 1;

    printf("Selamat datang di permainan Tebak Nomor!\n");
    printf("Saya telah memilih nomor antara 1 dan 20.\n");

    do {
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &user_guess);
        attempts++;

        if (user_guess < number_to_guess) {
            printf("Nomor saya lebih besar!\n");
        } else if (user_guess > number_to_guess) {
            printf("Nomor saya lebih kecil!\n");
        } else {
            printf("Selamat, anda benar! Anda menebak nomor saya dalam %d percobaan.\n", attempts);
        }

    } while (user_guess != number_to_guess);
}

int main() {
    char play_again;

    do {
        play_game();
        printf("\nApakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &play_again); 
    } while (play_again == 'y' || play_again == 'Y');

    printf("Terima kasih telah bermain! Sampai jumpa!\n");
    return 0;
}