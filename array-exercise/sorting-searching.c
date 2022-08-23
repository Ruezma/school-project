#include <stdio.h>

int main()
{
    int storage[10] = {45, 20, 30, 100, 95, 70, 75, 55, 85, 90};
    int findNumber, counter = 0;
    
    printf("Find a number : ");
    scanf("%d", &findNumber);
    
    //Searching system
    for(;;)
    {
        if (findNumber == storage[counter])
        {
            printf("The number %d is at index %d\n", findNumber, counter);            
            break;
        }
        else if (counter == sizeof(storage)/sizeof(*storage))
        {
            printf("No number found\n");
            break;
        }
        counter++;
    }
    
    //Sorting system
    int temporary;
    for(counter = 0; counter < (sizeof(storage)/sizeof(*storage)) - 1; counter++)
    {
        for(int o = 0; o < (sizeof(storage)/sizeof(*storage)) - 1; o++)
        {
            if (storage[o] > storage[o + 1])
            {
                temporary = storage[o + 1];
                storage[o + 1] = storage[o];
                storage[o] = temporary;
            }
        }
    }
    
    printf("Sorted array : ");
    for (counter = 0; counter < sizeof(storage) / sizeof(*storage); counter++)
    {
        printf("%d > ", storage[counter]);
    }
    
    return 0;
}
