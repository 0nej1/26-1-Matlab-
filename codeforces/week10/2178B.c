#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char r[200005];
        scanf("%s", r);

        int n = strlen(r);
        int ans = 0;

        // 맨 앞이 u면 s로 바꿔야 함
        if (r[0] == 'u')
        {
            ans++;
            r[0] = 's';
        }

        // 맨 뒤가 u면 s로 바꿔야 함
        if (r[n - 1] == 'u')
        {
            ans++;
            r[n - 1] = 's';
        }

        // 중간에서 u가 연속으로 나오면 하나는 s로 바꿔야 함
        for (int i = 1; i < n; i++)
        {
            if (r[i] == 'u' && r[i - 1] == 'u')
            {
                ans++;
                r[i] = 's';
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}