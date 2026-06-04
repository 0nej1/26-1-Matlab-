#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long a, b, n;
        scanf("%lld %lld %lld", &a, &b, &n);

        long long q = a / b;

        if (n <= q || a == b)
            printf("1\n");
        else
            printf("2\n");
    }

    return 0;
}