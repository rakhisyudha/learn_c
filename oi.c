#include "stdio.h"
#include "string.h"

int main(){
    char cars[][10] = {"Mustang", "Alphard", "Bmw"};

    strcpy(cars[1], "Tesla");

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
    

}