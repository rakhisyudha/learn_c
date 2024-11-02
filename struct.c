#include "stdio.h"
#include "string.h"

struct Player
{
    char Name[12];
    int age; 
};


int main(){
    struct Player Player1;
    {
        strcpy(Player1.Name, "Oi");
        Player1.age = 20;
    };
    printf("Player 1 Name: %s\n", Player1.Name);
    printf("Player 1 Age: %d\n", Player1.age);
    return 0;
}