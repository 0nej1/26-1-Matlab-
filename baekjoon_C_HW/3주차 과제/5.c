#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    int h, m;
    scanf("%d %d", &h, &m);
    int s = h * 60 + m;
    s -= 45;
    if (s < 0){
        s += 24 * 60;
    }
    printf("%d %d", s/60, s%60);

    return 0;
}