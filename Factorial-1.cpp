#include <stdio.h>

int main()
{
    int num;
    int fact = 1;

    scanf_s("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    printf("%d", fact);

    return 0;
}
