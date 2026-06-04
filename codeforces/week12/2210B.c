#include <stdio.h>

int p[200005];
int pos[200005];

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &p[i]);
            pos[p[i]] = i;
        }

        int safe = 0;
        int future = 0;
        int ans = 0;

        for (int e = 1; e <= n + 1; e++)
        {
            if (safe + future > ans)
                ans = safe + future;

            if (e <= n)
            {
                if (p[e] <= e)
                    safe++;
                if (p[e] >= e + 1)
                    future++;
                if (pos[e] < e)
                    future--;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}