#include<stdio.h>
void oddN(int);
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nThe first %d odd natural numbers are: \n\n", num);
    oddN(num);

    printf("\n\n");
    return 0;
} 

void oddN(int n)
{
    if (n > 0)
    {
        oddN(n - 1);
        printf("%d \t", 2*n-1);
    }
}