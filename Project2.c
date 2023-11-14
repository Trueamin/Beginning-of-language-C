#include <stdio.h>

int main(){

    //varible = Allocated space in memory to store a value.
    //          We refer to a varible's name to access the stored value.
    //          That varible now behaves as if it was the value it contains.
    //          BUT we need to declare what type of data we are storing.

int x;        //declaration
x = 123;      //initialization
int y = 321;  //declaration + initialization

int age = 19;               //integer
float gpa = 2.05;           //floating point number
char grade = 'A';           //single character
char name[] = "MamadAmin";  //array of characters

printf("Hello %s\n", name);
printf("You are %d years old\n", age);
printf("Your avarege grade is %c\n", grade);
printf("Your gpa is %f\n", gpa);
return 0;
}