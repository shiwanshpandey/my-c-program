#include<stdio.h>
int main()
{
    int a, b;
    char ch;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Enter your choice:'+' for addition, '-' for subtraction, '*' for multiplication: ");
    scanf(" %c", &ch);
    switch (ch)
    {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            if(a>b)
              { printf("Result: %d\n", a - b);}
            else
               { printf("Result: %d\n", b - a);}
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}