#include <stdio.h>

#define MAXN 200005

long long a[MAXN];
int ans[MAXN];

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

        int cnt = 0;
        int flipped = 0;

        for (int i = n; i >= 1; i--)
        {
            int isPositive;

            if (flipped == 0)
                isPositive = (a[i] > 0);
            else
                isPositive = (a[i] < 0);

            if (isPositive)
            {
                ans[cnt++] = i;
                flipped = 1 - flipped;
            }
        }

        printf("%d\n", cnt);

        for (int i = 0; i < cnt; i++)
        {
            printf("%d ", ans[i]);
        }

        printf("\n");
    }

    return 0;
}