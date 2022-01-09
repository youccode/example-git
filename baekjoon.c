#include <stdio.h>

int main(void)
{
    int cnt;
    int input;
    float result;

    scanf("%d", &cnt);
    float list[cnt];

    for (int i = 0; i < cnt; i++)
    {
        scanf("%d", &input);
        list[i] = input;
    }

    int max = list[0];

    for (int i = 0; i < cnt; i++)
    {
        if (max < list[i])
            max = list[i];
    }

    for (int i = 0; i < cnt; i++)
    {
        list[i] = list[i] / (float)max * 100;
        result += list[i];
    }

    printf("%f\n", result / cnt);
    return 0;
}