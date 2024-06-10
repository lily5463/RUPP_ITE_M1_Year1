#include <stdio.h>
int main() {
    int n;
    
    printf("How many students in total?\n");
    scanf("%d", &n);

    float score[n];

    printf("Input score for individual students:\n");
    for (int i = 0; i<n;i++)
    {
        printf("No. %d/%d: ", i+1,n);
        scanf("%f",&score[i]);
    }

    printf ("===================================\n");

    for (int i = 0; i<n;i++)
    {
        if (score[i] >= 90)
        {
            printf("No. %d | Score: %.2f | Grade A\n",i+1,score[i]);
        }
        else if (score[i] >= 80)
        {
            printf("No. %d | Score: %.2f | Grade B\n",i+1,score[i]);
        }
        else if (score[i] >= 70)
        {
            printf("No. %d | Score: %.2f | Grade C\n",i+1,score[i]);
        }
        else if (score[i] >= 60)
        {
            printf("No. %d | Score: %.2f | Grade D\n",i,score[i]);
        }
        else if (score[i] >= 50)
        {
            printf("No. %d | Score: %.2f | Grade E\n",i+1,score[i]);
        }
        else
        {
            printf("No. %d | Score: %.2f | Grade F\n",i+1,score[i]);
        }
    }

    printf ("======== Catagorized Grade =========\n");    
    for (int i = 0; i < n; i++)
    {
        if (score[i]>=90)
        {
            printf("No. %d | Score: %.2f | Grade A\n",i+1,score[i]);
        }
    }

    printf ("-----------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        if (score[i]>=80 && score[i]<90)
        {
            printf("No. %d | Score: %.2f | Grade B\n",i+1,score[i]);
        }
    }
    
    printf ("-----------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        if (score[i] >= 70 && score[i] < 80)
        {
            printf("No. %d | Score: %.2f | Grade C\n",i+1,score[i]);
        }
    }
    
    printf ("-----------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        if (score[i] >= 60 && score[i] < 70)
        {
            printf("No. %d | Score: %.2f | Grade D\n",i+1,score[i]);
        }
    }
    
    printf ("-----------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        if (score[i] >= 50 && score[i] < 60)
        {
            printf("No. %d | Score: %.2f | Grade E\n",i+1,score[i]);
        }
    }
    
    printf ("-----------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        if (score[i]<50)
        {
            printf("No. %d | Score: %.2f | Grade F\n",i+1,score[i]);
        }
    }
    
    return 0;
}