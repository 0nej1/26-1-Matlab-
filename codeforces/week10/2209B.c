#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        long long a[5005];

        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            int greater = 0;
            int smaller = 0;

            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > a[i])
                {
                    greater++;
                }
                else if (a[j] < a[i])
                {
                    smaller++;
                }
            }

            int ans = greater > smaller ? greater : smaller;
            printf("%d", ans);

            if (i != n - 1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}