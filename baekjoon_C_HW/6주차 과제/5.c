#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    int ar[100] = {0};
    int i,j,k;
    for (int x=0;x<M;x++){
        scanf("%d %d %d", &i, &j, &k);
        for (int y=i;y<=j;y++){
            ar[y-1] = k;
        }
    }
    int f = 0;
    for (int x=0;x<N;x++){
        if (f == 0){
            printf("%d",ar[x]);
            f++;
        }
        else{
            printf(" %d",ar[x]);
        }
    }

    return 0;
}