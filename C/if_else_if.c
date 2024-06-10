#include <stdio.h>
int main(){
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    if (age <= 12)
        printf("You are a child.\n");
    else if (age <= 19)
        printf("You are a teenager.\n");
    else if (age <= 64)
        printf("You are an adult.");
    else printf("You are older adult.\n");

    return 0;
}