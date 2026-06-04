#include <stdio.h>
#include <stdlib.h>

#define MAXN 3005

long long a[MAXN];

int compare(const void *p, const void *q)
{
    long long x = *(long long *)p;
    long long y = *(long long *)q;

    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }

        qsort(a, n, sizeof(long long), compare);

        int ans = 1;
        int cnt = 1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                continue;
            }
            else if (a[i] == a[i - 1] + 1)
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }

            if (cnt > ans)
                ans = cnt;
        }

        printf("%d\n", ans);
    }

    return 0;
}