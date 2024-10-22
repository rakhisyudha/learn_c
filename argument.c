#include <stdio.h>

void birthday(char name[], int umur){
    printf("Happy birthday %s\n", name);
    printf("You're %d years old!\n", umur);
}
int main(){
    char name[] = "kamu";
    int umur = 30;
    birthday(name, umur);
}