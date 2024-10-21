#include <stdio.h>

int main(){
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

    if(age < 18){
        printf("You can't get ur ID card Buddy");
    } else {
        printf("Here's ur ID card");
    }
}