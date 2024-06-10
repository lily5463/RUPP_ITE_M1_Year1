#include <stdio.h>
int main(){
    printf("This is exchange rate calculator\n");
    printf("===================================\n");
    float usd, riel;
    printf("Input your money ammount in USD: ");
    scanf("%f",&usd);
    riel = usd * 4150;
    printf("Today exchange rate is 1USD = 4150KHR.\n");
    printf("===================================\n");
    printf("You have %.2f USD which equal to %.2f KHR",usd,riel);
    
    return 0;
}