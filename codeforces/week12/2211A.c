#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, x;
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
        }

        for (int i = 0; i < n; i++)
        {
            if (i)
                printf(" ");
            printf("%d", n == 1 ? 1 : 2);
        }
        printf("\n");
    }

    return 0;
}