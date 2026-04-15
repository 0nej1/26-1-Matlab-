#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int a[30] = {0};
    for (int i = 0; i < 28; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        a[tmp - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if (a[i] == 0)
            printf("%d\n", i + 1);
    }

    return 0;
}
