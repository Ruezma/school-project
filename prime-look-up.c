#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    int prime, k = 2;
    bool True = true, check = true;
    char answer = 'y';
    
    while (answer == 'y'){
        printf("Input any number: ");
        scanf("%d", &prime);
        
        while (k <= sqrt(prime) && True){
            printf("prime: %d for k: %d\n", prime, k);
            if (prime%k == 0){
                printf("%d is not a prime number\n", prime);
                True = false;
            }
            k++;
        }
    
        if (True == true && prime > 1){
            printf("%d is a prime number\n", prime);
        }else if (prime <= 1){
            printf("%d is not a prime number\n", prime);
        }
        
        printf("Wanna check primeable number (y/t)? ");
        scanf("%c", &answer);
        main();
    }
    
    printf("Thank You");
    return 0;
}
