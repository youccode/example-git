#include <stdio.h>

int AP_check(int);

int main(void)
{
    // Have to check whether the number is AP(Arithmetic Progression) or not.
    // First, make the function that check AP
    // input => int / define the three integer / int a, b, c  c => n%10 b = (n/10)%10 a = (n/100)%10
    int num;
    int cnt = 0;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (AP_check(i) != 0)
        {

            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}

int AP_check(int n)
{
    int a, b, c;
    int bool = 0;

    while (n != 0)
    {
        a = n % 10; // 1234  a=4 b=3 c=2 a-b == b-c
        b = (n / 10) % 10;
        c = (n / 100 == 0) ? 10 : (n / 100) % 10;

        if (c == 10)
        {
            bool ++;
            break;
        }
        if ((a - b) != (b - c))
        {
            bool = 0;
            break;
        }

        n = n / 10;
        bool ++;
    }

    return bool;
}