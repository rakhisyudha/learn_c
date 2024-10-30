#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main(){
    struct Player player;
    strcpy(player.name, "Mulyono");
    player.score = 15;

    printf("%s\n", player.name);
    printf("%d", player.score);
}