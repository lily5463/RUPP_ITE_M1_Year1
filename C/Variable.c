// int order from low to hight: short int, int, long int, long long int;
// 
// #include <stdio.h>
// int main(){
//     int myVariable;
//     myVariable = 5;
//     myVariable = 50;
//     myVariable = 500;

//     const int unChangable = 5;
//     printf("My variable is %d\nUnchangable variable is %d\n",myVariable,unChangable);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int myVariable;
//     myVariable = 5; //initialize "myVariable" to the value of 5
//     printf("The value of myVariable is %d",myVariable);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int myVariable = 5;
//     printf("My variable is %d", myVariable);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     const int myConstVariable = 69;
//     printf("My constant variable is %d",myConstVariable);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int x = 5,y = 10, z = x + y;
//     printf("Z value is: %d\n",z);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int age, ageInDay;
//     printf("Please input your age in year: ");
//     scanf("%d",&age);
//     float dpy = 365.25;
//     ageInDay = age * dpy;
//     printf("I'm %d year(s) old and I'm approximately %d days old\n", age, ageInDay);
//     return 0;
// }


#include <stdio.h>
int main(){
    int age;
    
    printf("Please input your age: \n");
    scanf("%d",&age);

    printf("You're %d year(s) old",age);
    return 0;
}