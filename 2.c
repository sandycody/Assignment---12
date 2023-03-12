#include<stdio.h>
void revN(int);
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nThe first %d natural numbers in reverse order are: \n\n", num);
    revN(num);

    printf("\n\n");
    return 0;
}

void revN(int n)
{
    if (n > 0)
    {
        printf("%d \t", n);
        revN(n - 1);
    }    
}