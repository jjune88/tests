#include <stdio.h>

int main()
{
    for(int i= 1; i<=9; i++) 
    {
     for(int b= 1; b<=9; b++)
     {
         printf("%3d * %d =%2d",b,i,(i*b));
     } 
        printf("\n");
    }

return 0;
}