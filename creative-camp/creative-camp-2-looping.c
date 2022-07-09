#include <stdio.h>
    /*stdio.h header is contains input and output functions*/

#include <stdbool.h>
    /*stdbool.h header is contains boolean data type*/

#include <time.h>
    /*time.h header is contains time and date function
    declaration to provide standardized access to time/date 
    manipulation and formatting, in this case it's for
    sleep() function*/

#include <stdlib.h>
    /*stdlib.h header is to involving memory allocation, 
    process control conversion, and others*/

#include <unistd.h> 
    /*unistd.h is the name of the header file that 
    provides access to the POSIX operating system API*/

int main()
{
    char name[50], activities[50];
    int i=0, minute=0, day=0, hour=7; 
    int activity, longTime;
    
    printf("Hai, Namamu siapa?");
    printf("\nNamaku: "); 
    while(true)
    {
        scanf(" %[^\n]", &name[i]);
        break;
    }
    
    printf("\nSelamat pagi, %s!", name);
    while(hour < 22)
    {
        printf("\nJam menunjukkan pukul %02d:%02d", hour, minute);
        
        printf("\nApa aktivitasmu saat ini?"
            "\n\t1. Makan dan Minum (20 menit)"
            "\n\t2. Berolahraga (90 menit)"
            "\n\t3. Bersih-Bersih Diri (45 menit)"
            "\n\t4. Lain-lain"
            "\n\tPilihanmu nomor: ");
        scanf("%d", &activity);
        
        switch(activity)
        {
            case 1: 
                printf("\n%s sedang \"Makan dan Minum\"", name);
                hour += 0; minute += 20; break;
            case 2:
                printf("\n%s sedang \"Berolahraga\"", name);
                hour += 1; minute += 30; break;
            case 3:
                printf("\n%s sedang \"Mandi\"", name);
                hour += 0; minute += 15; break;
            case 4:
                printf("\nJenis aktivitas apa yang kamu lakukan? ");
                while(true)
                {
                    scanf(" %[^\n]", &activities[i]);
                    break;
                }
                printf("Berapa lama kamu melakukannya (menit)? ");
                scanf("%d", &longTime);
                
                printf("\n%s sedang \"%s\"", name, activities);
                hour += 0; minute += longTime; break;
            default: printf("\nTolong tulis antara nomor 1 hingga 5 saja"); break;
        }
        
        while(minute >= 60)
        {
            minute -= 60; hour += 1;
        }
        while(hour >= 24)
        {
            hour -= 24; day += 1;
        }
        
        sleep(1);
    }
    
    printf("\nInfo --> day %d pukul %02d:%02d"
        "\n%s harus tidur sekarang!",day, hour, minute, name);
    
    return 0;
}
