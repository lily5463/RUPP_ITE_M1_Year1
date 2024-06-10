#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 numbers:\n");
    scanf(" %d %d %d",&a,&b,&c);
    
    if (a > b && a > c)
        printf("Largest is a %d",a);
    if (b > a && b > c)
        printf("Largest is b %d",b);
    if (c > a && c > b)
        printf("Largest is C %d",c);
    
    return 0;
}