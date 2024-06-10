#include <stdio.h>

int main() {
    int A[5] = {-3,2,-20,-100,0};
    int oddArray[5], odd = 0;
    int evenArray[5], even = 0;

    for (int i=0;i<5;i++)
    {
        if (A[i]%2==0)
        {
            evenArray[even]=A[i];
            even++;
        }
        else
        {
            oddArray[odd]=A[i];
            odd++;
        }
    }

    printf("Odd numbers:\n");
    for (int i = 0; i<odd;i++)
    {
        printf("%d\n",oddArray[i]);
    }
    
    printf("Even numbers:\n");
    for (int i = 0; i < even; i++)
    {
        printf("%d\n", evenArray[i]);
    }
    return 0;
}