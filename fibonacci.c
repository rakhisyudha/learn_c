#include <stdio.h>

int main(){
    int i, n;
    int number1 = 0, number2 = 1;
    int berikutnya;

    berikutnya = number1 + number2;
    printf("Masukan nomor berakhir: ");
    scanf("%d", &n);
    printf("Fibonacci dimulai: %d, %d, ", number1, number2);
    for (i = 3; i <= n; ++i)
    {
        printf("%d, ", berikutnya);
        number1 = number2;
        number2 = berikutnya;
        berikutnya = number1 + number2;
    }
    
}