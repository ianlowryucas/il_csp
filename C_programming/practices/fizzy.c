//il 6th fizzbuzz

#include <stdio.h>

int main(void){
    int i=0;
    while(i<51){
        if (i%3==0&&i%5==0){
                printf("\nFizzBuzz");
            }else if (i%3==0){
                printf("\nFizz");
            }else if (i%5==0){
                printf("\nBuzz");
            }else{
            printf("\n%d", i);
        }  
        i+=1;
}
    return 0;
}
