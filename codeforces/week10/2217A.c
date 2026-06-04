#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            sum += x;
        }

        if (sum % 2 == 1 || (n * k) % 2 == 0)
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