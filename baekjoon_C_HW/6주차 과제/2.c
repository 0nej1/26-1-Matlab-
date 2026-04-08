#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    int N, x;
    scanf("%d %d", &N, &x);

    int flag = 0;

    for (int i=0;i<N;i++){
        int tmp;
        scanf("%d",&tmp);
        if (flag == 1 && tmp < x)printf(" %d", tmp);
        else if(flag == 0 && tmp < x){
            printf("%d", tmp);
            flag = 1;
        }
    }

    return 0;
}