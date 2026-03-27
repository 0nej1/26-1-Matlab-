#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    int T;
    scanf("%d", &T);
    for (int i=0;i<T;i++){
        int A, B;
        scanf("%d %d",&A, &B);
        printf("%d\n",A+B);
    }

    return 0;
}