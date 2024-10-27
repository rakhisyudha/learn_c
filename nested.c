#include <stdio.h>

int main(){
    int rows;
    int colums;
    int symbol;

    printf("Enter rows: ");
    scanf("%d", &rows);

    printf("Enter colums: ");
    scanf("%d", &colums);

    scanf("%c", &symbol);

    printf("Enter symbol: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= colums; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    
}