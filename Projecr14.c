#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(){

    char unit;
    float temp;
    
    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c" ,&unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f" ,&temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temp in Farenheit is: %.1f" ,temp);
    }
    else if(unit == 'F'){
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f" ,&temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temp in Celsius is: %.1f" ,temp);
    }
    else{
        printf("\n %c is not valid unit of measurement" ,unit);
    }

    return 0;
}