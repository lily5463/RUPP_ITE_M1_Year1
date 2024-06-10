#include <stdio.h>
int main(void){
printf("Enter your age: ");
int age;
scanf("%d",&age);
if (age > 18)
    printf("You're eligible for vote");
else printf("You're are not eligible");
return 0;
}