#include <stdio.h>

int main(){

    char name[25];
   int age;

   printf("What is Your name?\n");
   scanf("%s", &name);
   printf("How old are you?\n");
   scanf("%d", &age);
   printf("Your name is %s\n", name);
   printf("You are %d old\n", age);

    return 0;

}