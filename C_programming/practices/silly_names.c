//il 6th asingment
#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    char right = (":)");
    char left = ("(:");

    printf("type your name : ");
    scanf("%s", &name);
    strcat(name, right);
    strcat(left, name);
    printf("%s", left);

    return 0;
}

