#include <stdio.h>

int main(void)
{
    char string[101];
    int cnt;
    int result = 0;
    scanf("%d", &cnt);
    scanf("%s", string);

    for (int i = 0; i < cnt; i++)
    {
        result += string[i] - 48;
    }
    printf("%d\n", result);
}