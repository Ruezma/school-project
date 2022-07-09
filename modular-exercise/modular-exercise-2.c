#include <stdio.h>
#include <stdbool.h>

int summation(int add, int sum)
{
    sum += add;
    return sum;
}

int main()
{
    int number[100]; 
    int num; int i=0; 
    
    
    printf("How many number do you have: "); scanf("%d", &num);
    while (i < num)
    {
        printf("Input number-%d : ", i+1); scanf("%d", &number[i]);
        i++;
    }
    
    //Average value on list
    int sum = 0;
    for (int j=0; j <= i; j++)
    {
        int add = number[j];
        sum = summation(add, sum);
    }
    printf("\nThe Average value is %.2f", (double) sum/num);
    
    //Maximum value on list
    int max = 0;
    for (int j=0; j <= i; j++)
    {
        if (max < number[j])
        {
            max = number[j];
        }else
        {
            max = max;
        }
    }
    printf("\nThe max value is %d", max);
    
    //Minimum value on list
    int min = max;
    for (int j=0; j <= i; j++)
    {
        if (min > number[j])
        {
            min = number[j];
        }else
        {
            min = min;
        }
    }
    printf("\nThe min value is %d", min);
    
    return 0;
}
