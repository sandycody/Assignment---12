#include<stdio.h>
void printN(int);
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nThe first %d natural numbers are: \n\n", num);
    printN(num);

    printf("\n\n");
    return 0;
}

void printN(int n)
{
    if (n > 0)
    {
        printN(n - 1);
        printf("%d \t", n);
    }    
}