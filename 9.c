#include<stdio.h>
void d_to_o(int);
int main()
{
    int num;
    printf("\nEnter a decimal number: ");
    scanf("%d", &num);

    printf("\nThe octal conversion of %d is: ", num);
    d_to_o(num);

    printf("\n\n");
    return 0;
}

void d_to_o(int n)
{
    if (n > 0)
    {
        d_to_o(n / 8);
        printf("%d", n % 8);
    }    
}