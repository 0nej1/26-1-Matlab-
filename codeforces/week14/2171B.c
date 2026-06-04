#include <stdio.h>

#define MAXN 200005

long long a[MAXN];

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            scanf("%lld", &a[i]);
        }

        if (a[1] == -1 && a[n] == -1)
        {
            a[1] = 0;
            a[n] = 0;
        }
        else if (a[1] == -1)
        {
            a[1] = a[n];
        }
        else if (a[n] == -1)
        {
            a[n] = a[1];
        }

        for (int i = 2; i <= n - 1; i++)
        {
            if (a[i] == -1)
                a[i] = 0;
        }

        long long ans = a[n] - a[1];
        if (ans < 0)
            ans = -ans;

        printf("%lld\n", ans);

        for (int i = 1; i <= n; i++)
        {
            printf("%lld ", a[i]);
        }

        printf("\n");
    }

    return 0;
}