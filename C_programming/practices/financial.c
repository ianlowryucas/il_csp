// il 6th financial calculator
#include <stdio.h>

int main(void){
    int salary;
    int rent_mortgage;
    int utilities;
    int groceries;
    int transportation;
    float utilities_percent;
    float groceries_percent;
    float transportation_percent;
    float total;
    float free;

    printf("what is your monthly salary : ");
    scanf("%d", &salary);
    printf("what is your monthly rent : ");
    scanf("%d", &rent_mortgage);
    printf("what is your monthly utilities cost : ");
    scanf("%d", &utilities);
    printf("what is your monthly groceries : ");
    scanf("%d", &groceries);
    printf("what is you monthly transportation cost : ");
    scanf("%d", &transportation);

    float rent_percent = ((float)rent_mortgage/salary) *100;
    utilities_percent = ((float)utilities/salary)*100;
    groceries_percent = ((float)groceries/salary)*100;
    transportation_percent = ((float)transportation/salary)*100;
    total = rent_mortgage+groceries+transportation+utilities;
    free= salary-total;
    printf("inpertains to your salary these are the percents");
    printf("\nyour rent is %.2f", rent_percent);
    printf("\nyour utilities is %.2f", utilities_percent);
    printf("\nyour groceries is %.2f", groceries_percent);
    printf("\nyour transportation is %.2f", transportation_percent);
    printf("\nyour rent, utilities, groceries, and transportation adds up to %.2f", total);
    printf("\nyou can spend %.2f", free);

    return 0;
}

