#include <stdio.h>
#include <stdbool.h>

int main()
{
    float num;
    bool True = true;
    printf("Input any number: ");
    scanf("%f", &num);
    
    while (True){
        if (num < 0){
            printf("\n%.3f is a Negative Number", num);
        }else if (num > 0){
            printf("\n%.3f is a Positive Number", num);
        }else{
            printf("\n%.0f is a Non Negative Number, input another number please!\n", num);
            main();
        }
        True = false;
    }
        
    return 0;
}

//Hanya membaca 3 angka di belakang koma (untuk desimal)
