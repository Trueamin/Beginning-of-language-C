#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age: ",age);
    scanf("%d" ,&age);

    if(age <= 18){
        printf("You are now signed up! You were just born!");
    }
    else if(age = 0){
        printf("You can't sign up!");
    }
    else if(age < 0){
        printf("You havn't been born yet!");
    }
    else{
        printf("You are too young to sign up!");
    }

    return 0;
}