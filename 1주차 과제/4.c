#include <stdio.h>
#pragma warning(disable:4996)

int main(){
    int num;
    scanf("%d", &num);

    int p[100][100]={0};
    int t1, t2;
    
    for (int i=0;i<num;i++){
        scanf("%d %d", &t1, &t2);
        for (int j=t1;j<t1+10;j++){
            for (int k=t2;k<t2+10;k++){
                p[j][k] = 1;
            }
        }
    }

    int result = 0;
    for (int i=0;i<100;i++){
        for (int j=0;j<100;j++){
            if (p[i][j]==1){
                result++;
            }
       }
    }
    printf("%d", result);

    return 0;
}