#include <stdio.h>
int main (){
    char grade;
    printf("Enter your grade\n");
    scanf("%c",&grade);

    switch (grade){
        case 'A' :
            printf("Excelent!\n");
            break;
        case 'B' :
            printf("Good\n");
            break;
        case 'C' :
            printf("Well done\n");
            break;
        case 'D' :
            printf("You passed\n");
            break;
        case 'F' :
            printf("Better try again\n");
            break;
        default :
            printf("Invalid grade\n");
    }
    return 0;
}