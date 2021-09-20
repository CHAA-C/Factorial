#include <stdio.h>

int num,i;
int f;
int factorial();

int main()

{
    scanf_s("%d", &num);

    f = factorial();

    printf("%d", f);
}

int factorial()
{
    int sum = 1;

    for (int i = 1; i <= num; i++)
    {
        sum *= i;
    }

    return sum;
}