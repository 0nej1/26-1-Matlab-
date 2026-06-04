#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        long long a;
        scanf("%d %lld", &n, &a);

        long long v;
        int less = 0, greater = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &v);

            if (v < a)
                less++;
            else if (v > a)
                greater++;
        }

        if (less > greater)
        {
            printf("%lld\n", a - 1);
        }
        else
        {
            printf("%lld\n", a + 1);
        }
    }

    return 0;
}