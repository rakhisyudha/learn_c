#include <stdio.h>

int main(){
    int end;
    printf("Enter Finish number: ");
    scanf("%d", &end);
    for (int i = end; i >= 0; i--)
    {
        printf("%d\n", i);
    }
    
}