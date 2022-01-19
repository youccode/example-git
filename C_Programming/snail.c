#include <stdio.h>

int main(void)
{
    int A, B, V;
    int height = 0;
    int day = 0;

    scanf("%d %d %d", &A, &B, &V);
    while (height < V)
    {
        height += A;
        day++;
        if (height >= V)
        {
            break;
        }
        height -= B;
    }

    printf("%d\n", day);
    return 0;
}