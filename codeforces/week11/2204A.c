#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        char s[55];
        int visited[55] = {0};

        scanf("%d", &n);
        scanf("%s", s);

        int pos = 0;      // 0번 인덱스 = 1번 학생
        visited[pos] = 1; // 처음에 1번 학생이 공을 받음

        for (int i = 0; i < n; i++)
        {
            if (s[pos] == 'R')
            {
                pos++;
            }
            else
            {
                pos--;
            }
            visited[pos] = 1;
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (visited[i])
                ans++;
        }

        printf("%d\n", ans);
    }

    return 0;
}