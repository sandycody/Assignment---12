#include<stdio.h>
void d_to_b(int);
int main()
{
    int num;
    printf("\nEnter a decimal number: ");
    scanf("%d", &num);

    printf("\nThe binary conversion of %d is: ", num);
    d_to_b(num);

    printf("\n\n");
    return 0;
}

void d_to_b(int n)
{
    if (n > 0)
    {
        d_to_b(n / 2);
        printf("%d", n % 2);
    }    
}