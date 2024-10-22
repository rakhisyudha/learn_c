#include <stdio.h>

int main(){
    int end;
    printf("Enter finish number: ");
    scanf("%d", &end);
    for (int i = 2; i < end; i+=2)
    {
        printf("The even number are %d\n", i);
    }
    
}