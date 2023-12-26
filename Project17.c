#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = || (OR) checks if at least one codition is true

    float temp = 25;

    if(temp <= 0 || temp >= 30){
        printf("\nThe weater is bad!");
    }
    else{
        printf("\nThe weater is good!");
    }
 
    return 0;
}