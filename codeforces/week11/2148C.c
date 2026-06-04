#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        long long m;
        scanf("%d %lld", &n, &m);

        long long ans = 0;
        long long prevTime = 0;
        int prevSide = 0;

        for (int i = 0; i < n; i++)
        {
            long long a;
            int b;
            scanf("%lld %d", &a, &b);

            long long gap = a - prevTime;

            int needParity = prevSide ^ b;

            if (gap % 2 == needParity)
            {
                ans += gap;
            }
            else
            {
                ans += gap - 1;
            }

            prevTime = a;
            prevSide = b;
        }

        ans += m - prevTime;

        printf("%lld\n", ans);
    }

    return 0;
}