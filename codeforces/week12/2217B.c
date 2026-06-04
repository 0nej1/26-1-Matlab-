#include <stdio.h>

int a[200005];

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }

        int p;
        scanf("%d", &p);

        int x = a[p];
        int left = 0, right = 0;

        int prev = 0;
        for (int i = 1; i < p; i++)
        {
            int cur = (a[i] != x);
            if (cur != prev)
                left++;
            prev = cur;
        }

        prev = 0;
        for (int i = n; i > p; i--)
        {
            int cur = (a[i] != x);
            if (cur != prev)
                right++;
            prev = cur;
        }

        int ans = left > right ? left : right;
        if (ans % 2 == 1)
            ans++;

        printf("%d\n", ans);
    }

    return 0;
}