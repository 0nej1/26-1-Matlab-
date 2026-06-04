#include <stdio.h>

long long min(long long x, long long y)
{
    return x < y ? x : y;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long n, a, b;
        scanf("%lld %lld %lld", &n, &a, &b);

        long long group = n / 3;
        long long remain = n % 3;

        long long answer = group * min(3 * a, b) + min(remain * a, b);

        printf("%lld\n", answer);
    }

    return 0;
}