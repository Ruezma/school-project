#include <stdio.h>

int main()
{
    int sortlist[10] = {45, 20, 30, 100, 95, 70, 75, 55, 85, 90};
    int finderNumber, counter = 0;
    
    printf("Find a number : ");
    scanf("%d", &finderNumber);
    
    //Searching system
    for(;;)
    {
        if (counter == sizeof(sortlist)/sizeof(*sortlist))
        {
            printf("No number found\n");
            break;
        }
        else if (finderNumber == sortlist[counter])
        {
            printf("The number %d is at index %d\n", finderNumber, counter);
            break;
        }
        counter++;
    }
    
    //Sorting system
    int temporary;
    for(counter = 0; counter < (sizeof(sortlist)/sizeof(*sortlist)) - 1; counter++)
    {
        for(int count = 0; count < (sizeof(sortlist)/sizeof(*sortlist)) - 1; count++)
        {
            if (sortlist[count] > sortlist[count + 1])
            {
                temporary = sortlist[count + 1];
                sortlist[count + 1] = sortlist[count];
                sortlist[count] = temporary;
            }
        }
    }
    
    for (counter = 0; counter < sizeof(sortlist) / sizeof(*sortlist); counter++)
    {
        printf("%d\t", sortlist[counter]);
    }
    
    return 0;
}
