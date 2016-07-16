#include <stdio.h>
int main()
{
    double n;

    printf("Enter the number: ");
    scanf("%lf", &n);

    if (n <= 0.0)
    {
        if (n == 0.0)
            printf("You have entered 0");
        else
            printf("You have entered a negative number");
    }
    else
        printf("You have entered a positive number");
    return 0;
}
