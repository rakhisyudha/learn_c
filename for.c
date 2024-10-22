#include <stdio.h>

int main(){
    int start, end;
    int odd_count = 0, even_count = 0;

    printf("Enter first number: ");
    scanf("%d", &start);
    printf("Enter last Number: ");
    scanf("%d", &end);

    for (int i = end; i >= start; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d was an even number\n", i);
            even_count++;
        } else {
            printf("%d was an odd number\n", i);
            odd_count++;
        }
    }
    int result = even_count + odd_count;

    printf("There was %d even number\n", even_count);
    printf("There was %d odd number\n", odd_count);
    printf("And there was %d total number\n", result);
}