#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int p[200005];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p[i]);
        }

        long long ans = 0;

        for (int i = 0; i < n - 1; i++)
        {
            int diff = abs(p[i] - p[i + 1]);
            int g = gcd(p[i], p[i + 1]);

            if (diff == g)
            {
                ans++;
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}