#include "stdio.h"

int main(){
    int tahun;
    printf("Enter Year: ");
    scanf("%d", &tahun);
    if(tahun % 4 != 0){
        printf("%d was not a leap year!\n", tahun);
    } else {
        printf("%d was a leap year!\n", tahun); 
    }
}