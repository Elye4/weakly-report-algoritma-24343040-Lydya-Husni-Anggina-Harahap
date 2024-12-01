#include <stdio.h>

int main() {
    char *arr[] = {"D", "ND", "AND", "LAND", "RLAND", "ORLAND", "BORLAND"};

    for (int i = 0; i < 7; i++) {
        printf("%s\n", *(arr + i)); 
    }
    return 0;
}