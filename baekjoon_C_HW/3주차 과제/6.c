#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c;
    scanf("%d", &c);
    int sum = 60*a + b;
    sum += c;
    if (sum >= 24*60)sum -= 24*60;
    printf("%d %d", sum/60, sum%60);

    return 0;
}