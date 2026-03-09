#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(){
    int **p;

    p = (int **)malloc(9 * sizeof(int *));

    for (int i = 0;i < 9;i++){
        p[i] = (int *)malloc(9 * sizeof(int));
    }

    for (int i = 0;i < 9;i++){
        for (int j = 0;j < 9;j++){
            scanf("%d", &p[i][j]);
        }
    }

    int max = 0;
    int I, J;

    for (int i = 0;i < 9;i++){
        for (int j = 0;j < 9;j++){
            if (p[i][j] >= max){
                max = p[i][j];
                I = i;
                J = j;
            }
        }
    }

    printf("%d\n%d %d", max, I + 1, J + 1);

    for (int i=0; i<9; i++){
        free(p[i]);
    }
    free(p);

    return 0;
}