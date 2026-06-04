#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        for (int i = n; i >= 1; i--)
        {
            printf("%d", i);
            if (i > 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}