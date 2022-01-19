#include <stdio.h>
#include <math.h>

int main(void)
{
    double A, B, V;
    scanf("%lf %lf %lf", &A, &B, &V);
    double ans = ((V - A) / (A - B)) + 1;
    // printf("%f\n", ans);

    ans = ceil((double)ans);
    printf("%ld\n", (long)ans);
    // printf("%f\n", ans);
}