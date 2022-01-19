#include <stdio.h>
#include <string.h>

int main(void)
{
    int cnt;
    int point = 0;
    char c[80];
    int check = 0;

    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++)
    {
        scanf("%s", c);

        for (int j = 0; j < strlen(c); j++)
        {
            if (c[j] == 'O' && check)
            {
                check++;
                point += check;
            }
            if (c[j] == 'X')
                check = 0;
            if (c[j] == 'O' && check == 0)
            {
                point++;
                check++;
            }
        }

        printf("%d\n", point);
        point = 0;
        check = 0;
    }
}