// IL 6th time of day

#include <stdio.h>

int main(void){
    int hour;
    printf("what time is it in military time : ");
    scanf("%d", &hour);

    if(hour>=1 && hour<12){
        printf("good morning");
    }else if (hour>=12 && hour<20){
        printf("good evening");
    }else{
        printf("good night");
    }
    return 0;
}
