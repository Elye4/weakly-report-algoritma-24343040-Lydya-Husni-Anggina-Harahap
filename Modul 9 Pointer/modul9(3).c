#include <stdio.h>

int main() {
    
    int Lesley = 57082;
    int Layla;
    int Balmond;

    Layla = Lesley;

    Balmond = Layla + 1;

    printf("A. \n");
    printf("a) Nilai Layla: %d\n", Layla);   
    printf("b) Nilai Balmond: %d\n", Balmond); 
   
    int *Layla_ptr;
    
    Layla_ptr = &Lesley;

    Balmond = *Layla_ptr + 1;

    printf("\nB. \n");
    printf("a) Nilai Layla: %d\n", *Layla_ptr);  
    printf("b) Nilai Balmond: %d\n", Balmond); 

    return 0;
}