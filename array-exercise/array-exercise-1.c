#include <stdio.h>

int main()
{
    int data[10] = {45, 20, 30, 100, 95, 70, 75, 55, 85, 90};
    int i, sum = 0; 
    
    //Calculate total data
    for (i = 0; i < sizeof(data) / sizeof(*data); i++){
        sum += data[i];
    }
    printf("Summation : %d\n", sum);
    printf("Average : %.2f\n", (float) sum / (sizeof(data) / sizeof(*data)));
    
    //Find the maximum value
    sum = 0;
    for (i = 0; i < sizeof(data) / sizeof(*data); i++){
        if (sum < data[i]){
            sum = data[i];
        }
    }
    printf("Maximum : %d\n", sum);
    
    //Find the minimum value
    for (i = 0; i < sizeof(data) / sizeof(*data); i++){
        if (sum > data[i]){
            sum = data[i];
        }
    }
    printf("Minimum : %d\n", sum);
    return 0;
}
