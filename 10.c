#include<stdio.h>
void revN(int);
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nThe reverse of %d is: ", num);
    revN(num);

    printf("\n\n");
    return 0;
}

void revN(int n)
{
    if (n > 0)
    {
        printf("%d", n % 10);
        revN(n / 10);
    }    
}