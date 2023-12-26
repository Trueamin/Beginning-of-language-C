#include <stdio.h>

int main()
{
    // continue = skips rest of code & forces the next interation of the loop
    // break = exist a loop/switch

    for(int i = 1; i <=20; i++)
    {
       if(i == 13)
       {
        break; //continue;
       }
        printf("%d\n", i);
    }

    return 0;
}