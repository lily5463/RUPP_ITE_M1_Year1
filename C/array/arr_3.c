#include <stdio.h>
int main(){

    int score[5];
    printf("Input score values:\n");

    for (int i=0;i<5;i++)
    {
        scanf("%d", &score[i]);
    }

    for (int i=0;i<5;i++)
    {
        printf("\n%d", score[i]);
        
    }

    return 0;
}