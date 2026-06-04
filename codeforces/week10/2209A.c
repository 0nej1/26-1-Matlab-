#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    long long x = *(long long *)a;
    long long y = *(long long *)b;

    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        long long c, k;

        scanf("%d %lld %lld", &n, &c, &k);

        long long a[105];

        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }

        qsort(a, n, sizeof(long long), compare);

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= c)
            {
                long long need = c - a[i];

                long long use;
                if (k < need)
                {
                    use = k;
                }
                else
                {
                    use = need;
                }

                a[i] += use;
                k -= use;

                c += a[i];
            }
        }

        printf("%lld\n", c);
    }

    return 0;
}