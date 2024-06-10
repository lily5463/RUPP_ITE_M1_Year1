#include <stdio.h>
int main(){
    float num = 12.3456789;

    printf("%f\n",num);
    printf("%e\n",num);
    printf("%4.f\n",num);
    printf("%2.2f\n",num);
    printf("%10.3f\n",num);
    printf("%-10.3f\n",num);

    return 0;
}