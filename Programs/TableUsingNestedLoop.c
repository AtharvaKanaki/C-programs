#include<stdio.h>
int main()
{
    int a,b;
    for(a = 1; a <= 10; ++a)
    {
        
        printf("\n");
        for(b = 1; b <= 10; ++b)
        {
            printf("%d X %d = %d.\n",a,b,(a * b));
        }
    }
}