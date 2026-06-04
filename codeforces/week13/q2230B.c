#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[300005];
        scanf("%s", s);

        int n = strlen(s);
        int total13 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' || s[i] == '3')
            {
                total13++;
            }
        }

        int cnt2 = 0;
        int remain13 = total13;
        int maxKeep = remain13;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' || s[i] == '3')
            {
                remain13--;
            }
            else if (s[i] == '2')
            {
                cnt2++;
            }

            int keep = cnt2 + remain13;
            if (keep > maxKeep)
            {
                maxKeep = keep;
            }
        }

        printf("%d\n", n - maxKeep);
    }

    return 0;
}