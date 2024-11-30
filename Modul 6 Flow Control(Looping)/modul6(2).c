#include <stdio.h>

int main() {
    int baris = 5;

    for (int i = 0; i < baris; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}