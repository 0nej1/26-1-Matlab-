#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    int N;
    scanf("%d", &N);
    int ar[100];
    for (int i=0;i<N;i++){
        scanf("%d", &ar[i]);
    }
    int v;
    scanf("%d", &v);
    int cnt = 0;
    for (int i=0;i<N;i++){
        if (ar[i]==v)++cnt;
    }
    printf("%d", cnt);

    return 0;
}