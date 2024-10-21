#include <stdio.h>

int main(){
    char grade;
    printf("Enter Your Grades: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("You did Good, sure not using GPT?");
        break;
    case 'B':
        printf("Its okay");
        break;
    case 'C':
        printf("Not that bad actually");
        break;
    default:
        printf("Enter Valid grades bruh");
        break;
    }
}