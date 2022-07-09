#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> 
#include <string.h>

/*Daftar warna yang akan digunakan
sebagai warna output, sesuai dengan
perintah yang didapatkan*/
#define fgRed "\e[31;1m"
#define fggreen "\e[32;1m"
#define fgYellow "\e[33;1m"
#define fgCyan "\e[36;1m"
#define reset "\e[0m"

//Deklarasi fungsi warna
void txtColor(char a[]);

//Fungsi warna
void txtColor(char a[])
{
    printf("%s", a);
}

void main()
{
    char answer[10]; int num = 1;

    /*Space before the %c for the format string will skips 
    any leading white space, and in the second scanf() 
    skips past the newline that is waiting to be read.*/
    
    while(true)
    {
        printf("Masukkan step %d (L/R) = ", num);
        scanf(" %s", &*answer);
        
        /*Perintah if ini akan memastikan bahwa tidak ada
        2 atau lebih huruf yang dimasukkan user kedalam 
        variabel answer*/
        if (strlen(answer) != 1)
        {
            txtColor(fgYellow);
            printf("\nTolong tulis 1 huruf saja! \n");
            txtColor(reset);
            continue;
        }
        
        /*Perintah ini akan membuat seluruh kata yang 
        diinputkan menjadi tipe UPPERCASE*/
        for (int i=0; i<=strlen(answer)+1; i++)
        {
            answer[i] = toupper(answer[i]);
        }
        
        /*Perintah ini akan memastikan bahwa huruf yang
        diinputkan antara L atau R dan bukan yang lain*/
        if (strcmp(answer, "L") && strcmp(answer, "R") != 0)
        {
            txtColor(fgCyan);
            printf("\nTolong tulis antara \"L\" atau \"R\"!\n");
            txtColor(reset);
            continue;
        }
        
        //Mengetahui jejak yang dilakukan user
        printf("Langkah ke-%d mu adalah '%s'\n", num, answer);
        
        //Cek Balloon yang akan diterima jika posisi user memenuhi syarat
        if (strcmp(answer, "R") == 0)
        {
            if (num == 1)
            {
                txtColor(fggreen);
                printf("\nKamu mendapatkan balon ke 4\n"); num--;
                txtColor(reset);
                printf("Ulangi langkah ke-%d mu\n", num+1);
            }else if (num == 3)
            {
                txtColor(fggreen);
                printf("\nKamu mendapatkan balon ke 3\n"); num--;
                txtColor(reset);
                printf("Ulangi langkah ke-%d mu\n", num+1);
            }
            
        }else if(strcmp(answer, "L") == 0)
        {
            if (num == 2){
                txtColor(fggreen);
                printf("\nKamu mendapatkan balon ke 1\n"); num--;
                txtColor(reset);
                printf("Ulangi langkah ke-%d mu\n", num+1);
            }else if (num == 3)
            {
                txtColor(fggreen);
                printf("\nKamu mendapatkan balon ke 2\n");
                txtColor(reset);
                printf("Yay, Kamu menemukannya!");
                break;
            }
        }
        num++;
    }
}
