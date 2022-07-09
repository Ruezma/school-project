#include <stdio.h>
#include <stdbool.h>

//Program penjumlahan dengan mengaplikasikan "Fungsi"
int summation(int num, int sum)
{
    sum += num;
    return sum;
}

int substraction(int num, int sum)
{
    sum -= num;
    return sum;
}

int multiplication(int num, int sum)
{
    sum *= num;
    return sum;
}

int division(int num, double sum)
{
    sum = (double) sum / num;
    return (double)sum;
}


int main()
{
    int number[100]; int i=0;
    char answer;
    
    while (true)
    {
        //User data input
        printf("Input number-%d: ", i+1); scanf("%d", &number[i]);
        
        //Check, is there any number else
        printf("Continue? "); scanf(" %c", &answer);
        if (answer == 'y')
        {
            i++;
        }else
        {
            break;
        }
    }
    
    int sum = 0;
    //Result of the calculation
    printf("\nThe sum of ");
    for (int j=0; j <= i; j++)
    {
        int num = number[j];
        sum = summation(num, sum);
        printf("%d ", number[j]);
        if (j < i)
        {
            printf("+ ");
        }
    }
    printf("= %d", sum);
    
    sum = 1;
    //Result of the calculation
    printf("\nThe multiplication of ");
    for (int j=0; j <= i; j++)
    {
        int num = number[j];
        sum = multiplication(num, sum);
        printf("%d ", number[j]);
        if (j < i)
        {
            printf("X ");
        }
    }
    printf("= %d", sum);
    
    if (i < 2 && i > 0)
    {
        printf("\nThe substraction of ");
        for (int j=0; j < i; j++)
        {
            sum = number[j];
            int num = number[j+1];
            sum = substraction(num, sum);
            printf("%d - %d ", number[j], number[j+1]);
        }
        printf("= %d", sum);
        
        printf("\nThe division of ");
        for (int j=0; j < i; j++)
        {
            sum = number[j];
            int num = number[j+1];
            sum = division(num, sum);
            printf("%d / %d ", number[j], number[j+1]);
        }
        printf("= %.2f", (double)sum);
    }else
    {
        printf("Division will appear if there're 2 numbers only");
    }
    
    return 0;
}
