#include<stdio.h>
int main()
{
    int arr[7];
    for(int i=0; i<=6; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<=6; j++)
    {
        printf("%d\n", arr[j]);
    }
    int sum = 0;
    for(int k=0; k<=6; k++)
    {
        sum = sum + arr[k];
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}