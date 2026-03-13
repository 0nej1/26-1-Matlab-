#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(){
    int t[6];
    scanf("%d\n%d",&t[0], &t[1]);

    for (int i=2;i<=4;i++){
        t[i] = (t[1]%10)*t[0];
        t[1]/=10;
    }

    t[5]=0;
    for (int i=2;i<=4;i++){
        int tmp = 1;
        for (int j=0;j<i-2;j++){
            tmp *= 10;
        }
        t[5] += t[i] * tmp;
    }

    printf("%d\n%d\n%d\n%d", t[2], t[3], t[4], t[5]);

    return 0;
}