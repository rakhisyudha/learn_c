#include <stdio.h>

int main(){
    int number = 0;
    int sum = 0;

    do
    {
        printf("enter your number: ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
        
    } while (number > 0);
    printf("Sum number is %d", sum);
    
}