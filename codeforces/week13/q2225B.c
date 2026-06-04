#include <stdio.h>
#include <string.h>

int possible(char s[], int n, int start)
{
    int first = -1, last = -1;

    for (int i = 0; i < n; i++)
    {
        char expected;

        if ((i + start) % 2 == 0)
            expected = 'a';
        else
            expected = 'b';

        if (s[i] != expected)
        {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    if (first == -1)
        return 1;

    for (int i = first; i <= last; i++)
    {
        char expected;

        if ((i + start) % 2 == 0)
            expected = 'a';
        else
            expected = 'b';

        if (s[i] == expected)
            return 0;
    }

    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[200005];
        scanf("%s", s);

        int n = strlen(s);

        if (possible(s, n, 0) || possible(s, n, 1))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}