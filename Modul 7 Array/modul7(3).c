#include <stdio.h>
#include <string.h>

int main() {
  
    char username[] = "admin";    
    char password[] = "password123"; 
    char inputUsername[100], inputPassword[100];
    
    printf("Masukkan username: ");
    scanf("%s", inputUsername);
    
    printf("Masukkan password: ");
    scanf("%s", inputPassword);
    
    if (strcmp(inputUsername, username) == 0 && strcmp(inputPassword, password) == 0) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}