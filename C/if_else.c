#include <stdio.h>
int main(void){
    int a,b;
    printf("Enter a value\n");
    scanf("%d",&a);
    b = a%2;
    if (b==0)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;
}