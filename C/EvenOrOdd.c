#include <stdio.h>
int main(){
    int num;
    printf("Please input a number to check if it's even or odd:\n");
    scanf("%d",&num);
    
    if (num%2==0)
        printf("%d is even.\n",num);
    else if (num%2 == 1)
        printf("%d is odd.\n",num);
    else 
        printf("%d is not a valid input!",num);
    return 0;
}