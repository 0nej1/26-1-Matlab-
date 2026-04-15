#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[101];

    for (int k = 1; k <= n; k++)
    {
        a[k] = k;
    }

    for (int k = 0; k < m; k++)
    {
        int i, j;
        scanf("%d %d", &i, &j);
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

    for (int k = 1; k <= n; k++)
    {
        if (k == 1)
            printf("%d", a[k]);
        else
            printf(" %d", a[k]);
    }

    return 0;
}