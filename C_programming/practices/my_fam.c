// il 6th my family
#include <stdio.h>

int main(void){
    char fam1[20];
    char fam2[20];
    char fam3[20]; 
    printf("please type a family name : ");
    scanf("%s", &fam1);
    printf("please type a family name : ");
    scanf("%s", &fam2);
    printf("please type a family name : ");
    scanf("%s", &fam3);
    printf("\nhello %s", fam1);
    printf("\nhello %s", fam2);
    printf("\nhello %s", fam3);
    return 0;
}