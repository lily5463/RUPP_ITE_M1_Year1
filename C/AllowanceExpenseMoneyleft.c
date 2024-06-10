#include <stdio.h>
int main(){
    float allowance, expenses, left;
    printf("Personal Budget Claculator\n\n");

    printf("Please input your allowance: ");
    scanf("%f",&allowance);

    printf("Please input your total expenses: ");
    scanf("%f",&expenses);

    left = allowance - expenses;

    printf("\n\nMy allowance this month is: %.2f Riel and I have spent %.2f Riel.\nMy remain balance is: %.2f Riel.",allowance,expenses,left);
    return 0;
}