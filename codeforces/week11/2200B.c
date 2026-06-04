#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        int a[15];

        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int sorted = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                sorted = 0;
                break;
            }
        }

        if (sorted)
        {
            printf("%d\n", n);
        }
        else
        {
            printf("1\n");
        }
    }

    return 0;
}