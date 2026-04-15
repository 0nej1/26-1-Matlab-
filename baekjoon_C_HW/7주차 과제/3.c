#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int a[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int idx = 0;
    for (int i = 0; i < 10; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        int r = tmp % 42;
        int f = 0;
        for (int j = 0; j < idx; j++)
        {
            if (a[j] == r)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            a[idx++] = r;
        }
    }
    printf("%d", idx);

    return 0;
}
