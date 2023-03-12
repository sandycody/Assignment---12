#include<stdio.h>
void sqN(int);
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nThe squares of first %d natural numbers are: \n\n", num);
    sqN(num);

    printf("\n\n");
    return 0;
}

void sqN(int n)
{
    if (n > 0)
    {
        sqN(n - 1);
        printf("%d \t", n * n);
    }
}