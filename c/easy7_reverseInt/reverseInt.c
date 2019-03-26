#include <stdio.h>

void reverseInt(int);

int main(void)
{
    int number;
    printf("Please input a number :");
    scanf("%d", &number);

    reverseInt(number);

    return 0;
}

void reverseInt(int num)
{
    int result = 0;
    while (num != 0)
    {
        result = result * 10 + num % 10;
        num /= 10;
    }
    printf("%d\n", result);
}