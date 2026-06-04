#include <stdio.h>
#include <string.h>

#define MAXN 5005

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        char s[MAXN];
        char stack[MAXN];
        int top = 0;

        scanf("%d", &n);
        scanf("%s", s);

        for (int i = 0; i < n; i++)
        {
            if (top > 0 && stack[top - 1] == s[i])
            {
                top--;
            }
            else
            {
                stack[top++] = s[i];
            }
        }

        if (top == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}