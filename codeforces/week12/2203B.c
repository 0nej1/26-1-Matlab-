#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return (*(int *)b) - (*(int *)a);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char x[25];
        scanf("%s", x);

        int len = strlen(x);
        int sum = 0;
        int diff[25];

        for (int i = 0; i < len; i++)
        {
            int d = x[i] - '0';
            sum += d;

            if (i == 0)
                diff[i] = d - 1;
            else
                diff[i] = d;
        }

        if (sum <= 9)
        {
            printf("0\n");
            continue;
        }

        int need = sum - 9;
        qsort(diff, len, sizeof(int), cmp);

        int ans = 0;
        int reduced = 0;

        for (int i = 0; i < len; i++)
        {
            reduced += diff[i];
            ans++;

            if (reduced >= need)
                break;
        }

        printf("%d\n", ans);
    }

    return 0;
}