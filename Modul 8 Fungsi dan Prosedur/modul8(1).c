#include <stdio.h>

int perkalian(int a, int b) {
    
    if (b == 1) {
        return a;
    }
    
    return a + perkalian(a, b - 1);
}

int main() {
    int a, b;

    printf("Masukkan bilangan pertama (a): ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua (b): ");
    scanf("%d", &b);

    printf("Hasil perkalian %d x %d = %d\n", a, b, perkalian(a, b));

    return 0;
}