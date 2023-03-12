#include<stdio.h>
void revEven(int);
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nThe first %d even natural numbers in reverse order are: \n\n", num);
    revEven(num);

    printf("\n\n");
    return 0;
}

void revEven(int n)
{
    if (n > 0)
    {
        printf("%d \t", 2*n);
        revEven(n - 1);
    }
}