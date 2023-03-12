#include<stdio.h>
void evenN(int);
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nThe first %d even natural numbers are: \n\n", num);
    evenN(num);

    printf("\n\n");
    return 0;
} 

void evenN(int n)
{
    if (n > 0)
    {
        evenN(n - 1);
        printf("%d \t", 2*n);
    }
}