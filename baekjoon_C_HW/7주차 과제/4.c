#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[101];
    int i, j;
    for (i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    for (i = 0; i < m; i++)
    {
        int t1, t2;
        scanf("%d %d", &t1, &t2);
        int tmp[101];
        int idx = 0;
        for (j = t1; j <= t2; j++)
        {
            tmp[idx++] = a[j];
        }
        idx = 0;
        for (j = t2; j >= t1; j--)
        {
            a[j] = tmp[idx++];
        }
    }
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d", a[i]);
        }
        else
        {
            printf(" %d", a[i]);
        }
    }

    return 0;
}
