#include<stdio.h>
void main()
{
    int a;
    printf("Enter week day number:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
         printf("Today is Monday.\n");
         break;
        case 2:
         printf("Today is Tuesday.\n");
         break;
        case 3:
         printf("Today is Wednesday.\n");
         break;
        case 4:
         printf("Today is Thursday.\n");
         break;
        case 5:
         printf("Today is Friday.\n");
         break;
        case 6:
         printf("Today is Saturday.\n");
         break;
        case 7:
         printf("Today is Sunday.\n");
         break;
        default:
         printf("Invalid day number.\n");
    }
    printf("Thank you.\n");
}
