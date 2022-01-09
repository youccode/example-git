#include <stdio.h>

int main(void)
{
    int remainder[10];
    int input;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &input);
        remainder[i] = input % 42;
    }

    int cnt = 1;
    int count[10] = {
        -1,
    };

    count[0] = remainder[0];

    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < cnt; j++)
        {
            if (count[j] == remainder[i])
                break;
            if (j == cnt - 1)
            {
                count[cnt] = remainder[i];
                cnt++;
            }
        }
    }

    printf("%d\n", cnt);
    return 0;
}