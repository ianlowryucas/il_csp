//il 6th fizzbuzz

#include <stdio.h>

int main(void){
    int i=0;
    while(1<51){
        if (i%3==0&&i%5==0){
            if (i%5==0){
                printf("FizzBuzz");
            }else if (i%3==0){
                printf("Fizz");
            }else if (i%5==0){
                printf("Buzz");
            }
        }else{
            printf("%d", i);
        }    
    return 0;
}
