#include <stdio.h>
int main(){
    int a, b, max;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    max = a;
    if (b > max)
        max = b;
    
    printf("The largest number is %d", max);
    return 0;
}