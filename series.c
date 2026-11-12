#include<stdio.h>
int main()
{
    int a=0, b=1, n, c;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    printf("%d, %d", 0, 1);
    while(n>2)
    {
        c=a+b;
        printf(", %d", c);
        a=b;
        b=c;
        n--;
    }
    return 0;
}