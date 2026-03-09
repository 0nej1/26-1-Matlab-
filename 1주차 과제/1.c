#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(){
    int N, M;
    scanf("%d %d",&N, &M);

    int **A = (int **)malloc(N * sizeof(int *));
    int **B = (int **)malloc(N * sizeof(int *));

    for(int i=0; i<N; i++){
        A[i] = (int *)malloc(M * sizeof(int));
        B[i] = (int *)malloc(M * sizeof(int));
    }

    for (int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for (int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &B[i][j]);
        }
    }

    for (int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<N; i++){
        free(A[i]);
        free(B[i]);
    }
    free(A);
    free(B);

    return 0;
}