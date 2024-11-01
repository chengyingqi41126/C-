#include <stdio.h>
int main(void)
{
    int a, b;
    b = 4;
    printf("%d %d %d %d ", 1, 2, 3, 7);
    for (a = 8; a <= 100; a++)
    {
        if (a % 2 == 0)
            continue;
        else if (a % 3 == 0)
            continue;
        else if (a % 5 == 0)
            continue;
        else if (a % 7 == 0)
            continue;
        else
        {
            printf("%d ", a);
            b += 1;
        }  if (b % 5 == 0)
            printf("\n");
    }
    return 0;
}