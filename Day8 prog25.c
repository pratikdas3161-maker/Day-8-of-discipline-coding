/* C program to check divisibility by 3 and 5 */
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%3 ==0 && x%5 ==0)
    {
        printf("The number is divisible by both 3 and 5");
    }
    else if(x%3 ==0)
    {
        printf("The number is divisible by 3");
    }
    else
    {
        printf("The number is not divisible by 3 or 5");
    }
    return 0;
}