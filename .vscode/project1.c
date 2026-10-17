#include<stdio.h>
int main()
{
    int i, sum = 0;
    for(i=2; i<=20; i=i+2)
    {
        sum = sum + i;
    }
    printf("Sum of even numbers=%d", sum);
    return 0;
}