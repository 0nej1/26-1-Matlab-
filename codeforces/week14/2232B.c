#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        long long sum = 0;
        long long ans = 1000000000000000000LL;

        for (int i = 1; i <= n; i++)
        {
            long long a;
            scanf("%lld", &a);

            sum += a;

            long long now = sum / i;
            if (now < ans)
                ans = now;

            printf("%lld ", ans);
        }

        printf("\n");
    }

    return 0;
}