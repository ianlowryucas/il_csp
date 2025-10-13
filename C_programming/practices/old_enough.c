//il 6th old enough

#include <stdio.h>

int main(void){
    int age;
    printf("what is your age : ");
    scanf("%d", &age);

    if(age<5){
        printf("why are you here");
    }else if (age>=5){
        printf("you can go to elementary school congrats");
    }else if (age>=15){
        printf("you can get a learners permit congrats");
    }else if (age>=16){
        printf("you can drive congrats");
    }else;{
        printf("you can vote congrats");

    return 0;
}
