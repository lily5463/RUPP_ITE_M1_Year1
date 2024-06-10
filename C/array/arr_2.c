#include <stdio.h>
int main() {
    
    int score[5];
    printf("Input score values:\n");

    scanf("%d", &score[0]);
    scanf("%d", &score[1]);
    scanf("%d", &score[2]);
    scanf("%d", &score[3]);
    scanf("%d", &score[4]);
    
    printf("%d\n", score[0]);
    printf("%d\n", score[1]);
    printf("%d\n", score[2]);
    printf("%d\n", score[3]);
    printf("%d\n", score[4]);

    return 0;
}