#include <stdio.h>

int d(int);

int main(void)
{
    int a[10000] = {
        0,
    };
    int check = 0;

    for (int i = 1; i < 10000; i++)
    {
        check = d(i);
        if (check <= 10000)
        {

            a[d(i)]++;
        }
    }

    for (int i = 1; i < 10000; i++)
    {
        if (a[i] == 0)
        {
            printf("%d\n", i);
        }
    }
    char name = 시발
        // printf("%d", d(1234));
        return 0;
}

int d(int n)
{
    int ans = n;
    while (n != 0)
    {
        // ex) n = 1234
        ans += n % 10;
        n = n / 10;
    }

    return ans;
}