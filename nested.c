#include <stdio.h>

int main(){
    int rows, column, symbol;

    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter column: ");
    scanf("%d", &column);
    scanf("%c", &symbol);
    printf("Enter symbol: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    
}