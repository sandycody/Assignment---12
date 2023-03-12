#include<stdio.h>
void revOdd(int);
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nThe first %d odd natural numbers in reverse order are: \n\n", num);
    revOdd(num);

    printf("\n\n");
    return 0;
}

void revOdd(int n)
{
    if (n > 0)
    {
        printf("%d \t", 2*n-1);
        revOdd(n - 1);
    }
}