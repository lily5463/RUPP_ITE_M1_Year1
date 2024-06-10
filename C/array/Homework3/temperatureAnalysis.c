#include <stdio.h>

int main(){
    float temp[7], avgTemp, minTemp, maxTemp;
    int day[7], i, dayMin, dayMax;
    printf("Please input temperature for each day in C:\n");
    for (i = 0; i<7; i++)
    {
        scanf("%f", &temp[i]);
    }
    
    printf("This is the temperature for each day:\n");
    for (i = 0; i<7; i++)
    {
        printf("Temperature on day %d is %.2f C\n", i+1, temp[i]);
    }

    avgTemp = ((temp[0]+temp[1]+temp[2]+temp[3]+temp[4]+temp[5]+temp[6])/7);
    printf("\nAverage temperature in 7 days is: %.2f C\n\n", avgTemp);

    for (i = 0; i < 7; i++)
    {
        if (temp[i]<minTemp)
        {
            minTemp=temp[i];
            dayMin = i;
        }

        if (temp[i]>maxTemp)
        { 
            maxTemp=temp[i];
            dayMax = i;
        }
    }
    printf("Lowest temperatures recorded is on day %d with %.2f C.\n",dayMin+1, minTemp);
    printf("Highest temperatures recorded is on day %d with %.2f C.\n",dayMax+1, maxTemp);
    
    return 0;
}