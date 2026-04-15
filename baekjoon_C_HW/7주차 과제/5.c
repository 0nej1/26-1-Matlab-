#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    int n;
    scanf("%d", &n);
    double s[1000];
    int i;
    double max = -1.0;
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &s[i]);
        if (s[i] > max)
        {
            max = s[i];
        }
    }
    double sum = 0.0;
    for (i = 0; i < n; i++)
    {
        sum += (s[i] * 100.0 / max);
    }
    printf("%.2lf", sum / n);

    return 0;
}