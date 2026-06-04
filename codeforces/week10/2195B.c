#include <stdio.h>

int root(int x)
{
    while (x % 2 == 0)
    {
        x /= 2;
    }
    return x;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int possible = 1;

        for (int i = 1; i <= n; i++)
        {
            int x;
            scanf("%d", &x);

            if (root(i) != root(x))
            {
                possible = 0;
            }
        }

        if (possible)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}