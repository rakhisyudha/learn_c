#include <stdio.h>

int main(){
    int end;
    
    printf("Enter Finish number: ");
    scanf("%d", &end);
    for (int i = 1; i < end; i+=2)
    {
        printf("%d\n", i);
    }
    
}