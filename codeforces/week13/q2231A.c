#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        for (int i = n + 1; i <= 2 * n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}